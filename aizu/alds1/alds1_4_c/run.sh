
#echo "" | ./a.out
echo "6
insert AAA
insert AAC
find AAA
find CCC
insert CCC
find CCC
" | ./a.out
echo
echo "13
insert AAA
insert AAC
insert AGA
insert AGG
insert TTT
find AAA
find CCC
find CCC
insert CCC
find CCC
insert T
find TTT
find T" | ./a.out
