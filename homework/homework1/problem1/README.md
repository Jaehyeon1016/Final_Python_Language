In the problem 1, I did:

cd problem1
mkdir hw1_unix
cp -r hw1_unix /Users/jhyeonpark/CS-102/homework/homework1/problem1/hw1_unix_copy
cd hw1_unix_copy
vim file1.txt
cp -r file1.txt /Users/jhyeonpark/CS-102/homework/homework1/problem1/hw1_unix/file1_copy.txt
cp -r file1.txt /Users/jhyeonpark/CS-102/homework/homework1/problem1/hw1_unix/fi
le1_copy2.txt
cd ..
ls -la
cd hw1_unix
ls -la
cd ..
cd ..
git add problem1/
git commit -m "make files" 
git push
