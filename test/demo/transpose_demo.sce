// cd ~/Scilab6-Test-Toolbox
cd ..
cd ..
exec builder.sce
exec loader.sce
A = rand(6,9)
scilab_transpose = A'
custom_transpose = transpose(A)
scilab_transpose == custom_transpose
ans