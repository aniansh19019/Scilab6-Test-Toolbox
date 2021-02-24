// dateway between the transpose function and scilab
extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "trans.h"




static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)
{
	double* in1 = NULL; // pointer to input
	double* out1 = NULL; // pointer to output

    int m = 0; // num of rows of input matrix
    int n = 0; // num of columns of input matrix
    int size = 0;

    // check number of arguments
    // one input and one output

    if(nin != 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    if(nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    // check type of arguments
    // input should be an nxm matrix of doubles

    if(scilab_isMatrix2d(env, in[0]) == 0 || scilab_isDouble(env, in[0]) == 0)
    {
        Scierror(999, _("%s: Wrong type for input argument: 2D Scalar Matrix expected.\n"), fname);
        return 1;
    }

    // get dimensions of the input 2d matrix

    size = scilab_getDim2d(env, in[0], &m, &n);
    // get input array of double
    scilab_getDoubleArray(env, in[0], &in1);
    // create output argument
    out[0] = scilab_createDoubleMatrix2d(env, n, m, 0);
    // get output array of doubles
    scilab_getDoubleArray(env, out[0], &out1);
    // run the transpose function and store the result in the output double array
    trans(in1, out1, n, m); // scilab stores matrices column major!!!
    // return 0 for successful execution
    return 0;
}
}
