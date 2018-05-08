1.
#include <stdio.h>
#include <math.h>
float absoluteSum1D(int size, float vector[]);
int main()
{
float vector[10];
int i, size;
printf("Enter vector size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%f", &vector[i]);
printf("absoluteSum1D(): %.2f", absoluteSum1D(size, vector));
return 0;
}
float absoluteSum1D(int size, float vector[])
{
/* write your program code here */
    int i = 0;
    float sum = 0;
    for( i = 0;i<size;i++){
        if(vector[i]>= 0){
        sum = sum + vector[i];
        }
        else{
            sum =  sum - vector[i];
        }
    }
    return (float) sum;
}

2.
#include <stdio.h>
void findAverage2D(float matrix[4][4]);
int main()
{
float ar[4][4];
int i,j;
printf("Enter data: \n");
for (i = 0; i < 4; i++) {
for (j = 0; j < 4; j++)
scanf("%f", &ar[i][j]);
}
findAverage2D(ar);
printf("findAverage2D(): :\n");
for (i = 0; i < 4; i++) {
for (j = 0; j < 4; j++)
printf("%.2f ", ar[i][j]);
printf("\n");
}
return 0;
}
void findAverage2D(float matrix[4][4])
{
/* write your program code here */
int i = 0;
for (i = 0;i<4;i++){
    matrix[i][3] = (matrix[i][0] + matrix[i][1] + matrix[i][2])/3;
}
}

3.
#include <stdio.h>
void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
int ar[40];
int i, size;
int min, max;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%d", &ar[i]);
findMinMax1D(ar, size, &min, &max);
printf("min = %d; max = %d\n", min, max);
return 0;
}
void findMinMax1D(int ar[], int size, int *min, int *max)
{
/* Write your program code here */
int maxx = ar[0];
int minn = ar[0];
int i = 0;
for(i = 1;i<size;i++){
    if(ar[i]<= minn) minn = ar[i];
    if(ar[i]>= maxx) maxx = ar[i];
}
*min = minn;
*max = maxx;
}

4.
#include <stdio.h>
#define SIZE 5
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);
int main()
{
int A[5][5];
int i,j,min,max;
printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
for (i=0; i<5; i++)
for (j=0; j<5; j++)
scanf("%d", &A[i][j]);
findMinMax2D(A, &min, &max);
printf("min = %d\nmax = %d", min, max);
return 0;}
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
/* add your code here */
int maxx = ar[0][0];
int minn = maxx;
int i = 0;
int j = 0;
for(i = 0;i<SIZE;i++){
    for(j = 0;j<SIZE;j++){
        if (maxx <= ar[i][j]) maxx = ar[i][j];
        if (minn >= ar[i][j]) minn = ar[i][j];
    }
}
*min = minn;
*max = maxx;
}

5.
#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
int i,b[50],size;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%d",&b[i]);
printf("platform1D(): %d\n", platform1D(b,size));
return 0;
}
int platform1D(int ar[], int size)
{
/* Write your program code here */
int currentlen = 1;
int maxlen = 1;
int i = 0;
for (i = 0;i<size-1;i++){
    if (ar[i+1] == ar[i]){
        currentlen = currentlen+1;
    }
    else{
        if (currentlen >= maxlen) maxlen = currentlen;
        currentlen = 1;
    }
}
if (ar[size-1] == ar[size-2]){
    if (currentlen >= maxlen) maxlen = currentlen;
}

return maxlen;
}



























6.
#include <stdio.h>
#define SIZE 10
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int
*sum1, int *sum2);
int main()
{
int ar[SIZE][SIZE], rowSize, colSize;
int i, j, sum1=0, sum2=0;
printf("Enter row size of the 2D array: \n");
scanf("%d", &rowSize);
printf("Enter column size of the 2D array: \n");
scanf("%d", &colSize);
printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
for (i=0; i<rowSize; i++)
for (j=0; j<colSize; j++)
scanf("%d", &ar[i][j]);
diagonals2D(ar, rowSize, colSize, &sum1, &sum2);
printf("sum1=%d; sum2=%d\n",sum1,sum2);
}
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int
*sum1, int *sum2)
{
/* Write your program code here */
int summ1 = 0;
int summ2 = 0;
int i = 0;
for (i = 0;i<rowSize;i++){
        summ1 = summ1 + ar[i][i];
        summ2 = summ2 + ar[i][rowSize -1 - i];
}
*sum1 = summ1;
*sum2 = summ2;
}




























7.
#include <stdio.h>
#define SIZE 10
void transpose2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main()
{
int ar[SIZE][SIZE], rowSize, colSize;
int i,j;
printf("Enter row size of the 2D array: \n");
scanf("%d", &rowSize);
printf("Enter column size of the 2D array: \n");
scanf("%d", &colSize);
printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
for (i=0; i<rowSize; i++)
for (j=0; j<colSize; j++)
scanf("%d", &ar[i][j]);
printf("transpose2D(): \n");
transpose2D(ar, rowSize, colSize);
display(ar, rowSize, colSize);
return 0;
}
void display(int ar[][SIZE], int rowSize, int colSize)
{
int l,m;
for (l = 0; l < rowSize; l++) {
for (m = 0; m < colSize; m++)
printf("%d ", ar[l][m]);
printf("\n");
}
}
void transpose2D(int ar[][SIZE], int rowSize, int colSize)
{
/* Write your program code here */
int intermidiate = 0;
int i = 0;
int q = 0;
for(q = 0; q<rowSize;q++){
for(i = 0; i<=q;i++){
    intermidiate = ar[q][i];
    ar[q][i] = ar[i][q];
    ar[i][q] = intermidiate;
}
}
}

















8.
#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{
int ar[SIZE][SIZE], rowSize, colSize;
int i,j,min;
printf("Enter row size of the 2D array: \n");
scanf("%d", &rowSize);
printf("Enter column size of the 2D array: \n");
scanf("%d", &colSize);
printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
for (i=0; i<rowSize; i++)
for (j=0; j<colSize; j++)
scanf("%d", &ar[i][j]);
min=minOfMax2D(ar, rowSize, colSize);
printf("minOfMax2D(): %d\n", min);
return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
/* Write your program code here */
int minn = ar[0][0];
int comp = ar[1][0];
int i = 0;
int j;
for(i = 0; i<colSize;i++){
    if(ar[0][i] >= minn) minn = ar[0][i];
}
for(i = 1;i<rowSize;i++){
    comp = ar[i][0];
    for(j = 0;j<colSize;j++){
        if(ar[i][j] >= comp) comp = ar[i][j];
    }
    if (comp <= minn) minn = comp;
}
return minn;
}



1.
#include <stdio.h>
int rAge(int studRank);
int main()
{
int studRank;
printf("Enter student rank: \n");
scanf("%d",&studRank);
printf("rAge(): %d\n", rAge(studRank));
return 0;
}
int rAge(int studRank)
{
/* Write your code here */
 if(studRank == 1) return 10;
 else return 2+rAge(studRank-1);
}














2.
#include <stdio.h>
float rPower1(float num, int p);
int main()
{
int power;
float number;
printf("Enter the number and power: \n");
scanf("%f %d", &number, &power);
printf("rPower1(): %.2f\n", rPower1(number, power));
return 0;
}
float rPower1(float num, int p)
{
/* Write your code here */
if (p == 0) return (float)1.00;
else if (p<0) return (float) rPower1(num,p+1)/num;
else return num*rPower1(num,p-1);
}












3.
#include <stdio.h>
void rCountZeros2(int num, int *result);
int main()
{
int number, result;
printf("Enter the number: \n");
scanf("%d", &number);
rCountZeros2(number,&result);
printf("rCountZeros2(): %d\n", result);
return 0;
}
void rCountZeros2(int num, int *result)
{
/* Write your program code here */
if (num == 0) *result = 1;
else if (num<=9 && num >= 1) *result = 0;
else {
    if (num%10 == 0) {
        rCountZeros2(num/10,result);
        *result = *result + 1;
    }
    else{
        rCountZeros2(num/10,result);
    }
}
}




4.
#include <stdio.h>
int rAllOddDigits1(int num);
int main()
{
int number;
printf("Enter a number: \n");
scanf("%d", &number);
printf("rAllOddDigits1(): %d\n", rAllOddDigits1(number));
return 0;
}
int rAllOddDigits1(int num)
{
/* Write your code here */
if(num <10){
    if (num%2 == 0) return 0;
    else return 1;
}
else{
    if(num%2 == 0) return 0;
    else{
        rAllOddDigits1(num/10);
    }
}
}






5.
#include <stdio.h>
void rReverseDigits(int num, int *result);
int main()
{
int result=0, number;
printf("Enter a number: \n");
scanf("%d", &number);
rReverseDigits(number, &result);
printf("rReverseDigits(): %d\n", result);
return 0;
}
void rReverseDigits(int num, int *result)
{
/* Write your code here */
int a = num;
int i;
int count = 0;
while(a != 0){
    count = count+1;
    a = a/10;
}
if (num <10){
    *result = *result + num;
}
else {
    a = (num%10);
    while(count > 1){
        a = a*10;
        count = count -1;
    }
    *result = *result + a;
    rReverseDigits(num/10,result);
}
}



























6.
#include <stdio.h>
int rStrLen(char *s);
int main()
{
char str[80];
printf("Enter the string: \n");
gets(str);
printf("rStrLen(): %d\n", rStrLen(str));
return 0;
}
int rStrLen(char *s)
{
/* Write your program code here */
if (*s == '\0') return 0;
else {
    int i = 0;
    while(s[i] != '\0'){
        s[i] = s[i+1];
        i = i+1;
    }
    return rStrLen(s)+1;
}
}







7.
#include <stdio.h>
#define INIT_VALUE 10
int rStrcmp(char *s1, char *s2);
int main()
{
char source[40], target[40];
int result=INIT_VALUE;
printf("Enter a source string: \n");
gets(source);
printf("Enter a target string: \n");
gets(target);
result = rStrcmp(source, target);
printf("rStrcmp(): %d", result);
return 0;
}
int rStrcmp(char *s1, char *s2)
{
    /* Write your code here */
    if(s1[0] != s2[0]){
        if (s1[0] > s2[0]) return 1;
        else return -1;
    }
    if(s1[0] == '\0' && s2[0] != '\0') return -1;
    if(s2[0] == '\0' && s1[0] != '\0') return 1;
    if(s1[0] == '\0' && s2[0] == '\0') return 0;
    else {
        int i = 0;
        int j = 0;
        int p;
        while(s1[i] != '\0') {i = i+1;}
        while(s2[j] != '\0') {j = j+1;}
        for(p = 0;p<i;p++) s1[p] = s1[p+1];
        for(p = 0;p<i;p++) s2[p] = s2[p+1];
        rStrcmp(s1,s2);
    }

}
























8.
#include <stdio.h>
void rFindMaxAr(int *ar, int size, int i, int *index);
int main()
{
int ar[50],i,maxIndex=0,size;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d numbers: \n", size);
for (i=0; i < size; i++)
scanf("%d", &ar[i]);
rFindMaxAr(ar,size,0,&maxIndex);
printf("Max number: %d\n", ar[maxIndex]);
printf("Index position: %d\n", maxIndex);
return 0;
}
void rFindMaxAr(int *ar, int size, int i, int *index)
{
/* Write your code here */
if(size == i+1){
    if(ar[*index] < ar[i]) {
        *index = i;
    }
}
else{
    if(ar[*index] < ar[i]) {
        *index = i;
    }
    rFindMaxAr(ar,size,i+1,index);
}
}


9.
#include <stdio.h>
void rReverseAr(int ar[], int size);
int main()
{
int array[80];
int size, i;
printf("Enter size: \n");
scanf("%d", &size);
printf("Enter %d numbers: \n", size);
for (i = 0; i < size; i++)
scanf("%d", &array[i]);
printf("rReverseAr(): ");
rReverseAr(array, size);
for (i = 0; i < size; i++)
printf("%d ", array[i]);
printf("\n");
return 0;
}
void rReverseAr(int ar[], int size)
{
/* Write your program code here */

if(size == 1 || size == 0){}
else{
    char p;
    p = ar[size-1];
    ar[size-1] = ar[0];
    ar[0] = p;
    rReverseAr(ar+1,size-2);
}
}



1.
#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{char str[50];
int totVowels, totDigits;
printf("Enter the string: \n");
gets(str);
processString(str, &totVowels, &totDigits);
printf("Total vowels = %d\n", totVowels);
printf("Total digits = %d\n", totDigits);
return 0;}
void processString(char *str, int *totVowels, int *totDigits)
{
/* Write your program code here */
int i = 0;
int v = 0;
int d = 0;
while(str[i] != '\0'){
    if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
        v = v+1;
    }
    if(str[i] == '0'||str[i] == '1'||str[i] == '2'||str[i] == '3'||str[i] == '4'||str[i] == '5'||str[i] == '6'||str[i] == '7'||str[i] == '8'||str[i] == '9'||str[i] == '0'){
        d = d+1;
    }
    i = i+1;
}
*totDigits = d;
*totVowels = v;
}



2.
#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
char a[80],b[80];
printf("Enter the first string: \n");
gets(a);
printf("Enter the second string: \n");
gets(b);
printf("compareStr(): %d\n", compareStr(a,b));
return 0;
}
int compareStr(char *s, char *t)
{
/* Write your code here */
int i = 0;
int result;
while (s[i] == t[i]){
    i = i+1;
}
result = s[i]-t[i];
return result;
}







3.
#include <stdio.h>
int countWords(char *s);
int main()
{
char str[50];
printf("Enter the string: \n");
gets(str);
printf("countWords(): %d", countWords(str));
return 0;
}
int countWords(char *s)
{
/* Write your code here */
int i = 0;
int space = 0;
while(s[i] != '\0'){
    if (s[i] == ' ') space = space + 1;
    i = i + 1;
}
return space+1;
}









5.
#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int
size);
int main()
{
char word[SIZE][40];
char first[40], last[40];
int i, size;
printf("Enter size: \n");
scanf("%d", &size);
printf("Enter %d words: \n", size);
for (i=0; i<size; i++)
scanf("%s", word[i]);
findMinMaxStr(word, first, last, size);
printf("First word = %s, Last word = %s\n", first, last);
return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int
size)
{
/* Write your program code here */
int lastindex = 0;
int firstindex = 0;
int i;
int j;
for (i = 0;i<size;i++){
    if(strcmp(word[i],word[lastindex])>0) lastindex = i;
}
for(j = 0;j<size-1;j++){
        if(strcmp(word[j],word[firstindex])<0) firstindex = j;
}
strcpy(first,word[firstindex]);
strcpy(last, word[lastindex]);
}

























6.
#include <stdio.h>
#include <string.h>
#define N 20
char *longestStrInAr(char str[N][40], int size, int *length);
int main()
{
    int i, size, length;
    char str[N][40], first[40], last[40], *p;
    char dummychar;
    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for (i=0; i<size; i++) {
        printf("Enter string %d: \n", i+1);
        gets(str[i]);
    }
    p = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d\n", p, length);
    return 0;
}
char *longestStrInAr(char str[N][40], int size, int *length)
{
    int i;
    int maxlen = strlen(str[0]);
    int maxindex = 0;
    for(i=0;i<size;i++){
        if (strlen(str[i])>maxlen) {
            maxlen = strlen(str[i]);
            maxindex = i;
        }
    }
    *length = maxlen;
    return str[maxindex];
}























7.
#include <stdio.h>
void strIntersect(char *str1, char *str2, char *str3);
int main()
{
    char str1[50],str2[50],str3[50];
    printf("Enter str1: \n");
    scanf("%s",str1);
    printf("Enter str2: \n");
    scanf("%s",str2);
    strIntersect(str1, str2, str3);
    if (*str3 == '\0')
        printf("strIntersect(): null string\n");
    else
        printf("strIntersect(): %s\n", str3);
    return 0;
}
void strIntersect(char *str1, char *str2, char *str3)
{
    int len1 = 0;
    int len2 = 0;
    int i,j;
    int k = 0;
    char md;
    int panduan = 0;
    while(str1[len1] != '\0'){
        len1 = len1+1;
    }
    while(str2[len2] != '\0'){
        len2 = len2+1;
    }
    for(i = 0;i<len1;i++){
        for(j = 0;j<len2;j++){
            if (str1[i] == str2[j]){
                md = str1[i];
                panduan = 1;
            }
        }
        if(panduan == 1) {
            str3[k] = md;
            panduan = 0;
            k = k+1;
        }
    }
}
















8.
#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main()
{
    char a[80],b[80];
    char c[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    mergeStr(a,b,c);
    printf("mergeStr(): ");
    puts(c);
    return 0;
}
void mergeStr(char *a, char *b, char *c)
{
    int i;
    int oldlena;
    oldlena = strlen(a);
    for(i = 0;i<=strlen(b);i++){
        a[oldlena+i] = b[i];
    }
    int newlena = strlen(a);
    int k,q;
    int j = 0;
    int minindex = 0;
    char minchar = a[0];
    for(q = newlena;q>0;q--){
        for(k = 0;k<q;k++){
            if (a[k] < a[minindex]){
                minindex = k;
                minchar = a[k];
            }
        }
        c[j] = minchar;
        j = j+1;
        for(k = minindex;k<q;k++){
            a[k] = a[k+1];
        }
        minindex = 0;
        minchar = a[0];

    }
}















9.
#include <stdio.h>
#define INIT_VALUE -1
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40];
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0; }
int findSubstring(char *str, char *substr)
{
    int len1 = 0;
    int len2 = 0;
    int i,j;
    int k = 0;
    char part[40];
    int counter = 0;
    while(str[len1] != '\0'){
        len1++;
    }
    while(substr[len2] != '\0'){
        len2++;
    }
    for(i=0;i<len1;i++){
        if(str[i] == substr[0]){
            if(len1 -i >= len2){
            for(j = 0;j<len2;j++){
                part[j] = str[j+i];
            }
            part[len2] = '\0';
            while(part[k] != '\0'){
                if(part[k] == substr[k]) counter = counter +1;
                k = k+1;
            }
            if(counter == k) return 1;
            else{
                k = 0;
                counter = 0;
            }
        }
    }
    }
    return 0;
}










10.
#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80],substr[80];
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}
int countSubstring(char str[], char substr[])
{
    int len1 = 0;
    int len2 = 0;
    int i,j;
    int k = 0;
    char part[40];
    int samethenplus1 = 0;
    int counter = 0;
    while(str[len1] != '\0'){
        len1++;
    }
    while(substr[len2] != '\0'){
        len2++;
    }
    for(i=0;i<len1;i++){
        if(str[i] == substr[0]){
            if(len1 -i>= len2){
                for(j = 0;j<len2;j++){
                    part[j] = str[j+i];
                }
                part[len2] = '\0';
                while(part[k] != '\0'){
                    if(part[k] == substr[k]) samethenplus1 = samethenplus1 +1;
                    k = k+1;
                }
                if(samethenplus1 == k) counter = counter +1;
                else{
                    k = 0;
                    samethenplus1 = 0;
                }
            }
        }
    }
    return counter;
}


#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
    Person man[3], middle;
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    /* Write your program code here */
    int i;
    for(i=0;i<=2;i++){
        printf("Enter person %d: \n",i+1);
        scanf("%s %d",&p[i].name,&p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
    /* Write your program code here */
    int max = p[0].age;
    int min = p[0].age;
    int i;
    int final;
    for(i=0;i<3;i++){
        if(max<p[i].age) max = p[i].age;
        if(min>p[i].age) min = p[i].age;
    }
    for(i=0;i<3;i++){
        if (max>p[i].age && min<p[i].age){
            final = i;
        }
    }
    return p[final];
}



















2.
#include <stdio.h>
typedef struct {
    char source;
    char code;
} Rule;
void encodeChar(Rule table[5], char *s, char *t);
int main()
{
    char s[80],t[80];
    Rule table[5] = {'a','d', 'b','z', 'z','a', 'd','b', '\0','\0' };
    printf("Source string: \n");
    gets(s);
    encodeChar(table,s,t);
    printf("Encoded string: %s\n", t);
    return 0;
}
void encodeChar(Rule table[5], char *s, char *t)
{
    int len = 0;
    int i,j;
    int change = 0;
    while(s[len] != '\0'){
        len = len + 1;
    }
    for(i = 0;i<len;i++){
        for(j = 0;j<5;j++){
            if(s[i] == table[j].source){
                t[i] = table[j].code;
                change = 1;
            }
        }
        if (change == 0){
            t[i] = s[i];
        }
        change = 0;
    }
    t[len] = '\0';
}




















3.
#include <stdio.h>
#include <string.h>
struct account {
    struct
    {
        char lastName[10];
        char firstName[10];
    } names;
    int accountNum;
    double balance;
};
void  nextCustomer(struct account *acct);
void  printCustomer(struct account acct);
int main()
{
    struct account record;
    int flag = 0;
    do {
        nextCustomer(&record);
        if ((strcmp(record.names.firstName, "End") == 0) &&
            (strcmp(record.names.lastName, "Customer") == 0))
            flag = 1;
        if (flag != 1)
            printCustomer(record);
    } while (flag != 1);
}
void nextCustomer(struct account *acct)
{
    printf("Enter names (firstName lastName): \n");
    scanf("%s %s",&acct->names.firstName,&acct->names.lastName);
    if ((strcmp(acct->names.firstName, "End") == 0) &&
        (strcmp(acct->names.lastName, "Customer") == 0)){
    }
    else{
    printf("Enter account number:\n");
    scanf("%d",&acct->accountNum);
    printf("Enter balance:\n");
    scanf("%lf",&acct->balance);
    }
}
void  printCustomer(struct account acct)
{
    printf("Customer record:\n");
    printf("%s %s %d %.2lf\n",acct.names.firstName,acct.names.lastName,acct.accountNum,acct.balance);
}















4.

#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    char name[20];
    char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main()
{
    PhoneBk s[MAX];
    char t[20];
    int size;
    size = readin(s);
    printf("Enter search name: \n");
    gets(t);
    search(s,size,t);
    return 0;
}
int readin(PhoneBk *p)
{
    int count = 0;
    char stop[40] = "#";
    char dummy;
    printf("Enter name:\n");
    gets(p[count].name);
    while(strcmp(&p[count].name,&stop) != 0){
        printf("Enter tel:\n");
        gets(p[count].telno);
        count = count +1;
        printf("Enter name:\n");
        gets(p[count].name);
    }
    return count;
}
void search(PhoneBk *p, int size, char *target)
{
    int i;
    int signal = 0;
    for(i = 0;i<size;i++){
        if(strcmp(&p[i].name,target) == 0) {
            printf("Name = %s, Tel = %s\n",p[i].name,p[i].telno);
            signal = 1;
        }
    }
    if (signal == 0) printf("Name not found!\n");
}




1.
void printReverse1(int ar[], int size)
{
   /* using index ¨C Write your program code here */
   int i;
   printf("printReverse1(): ");
   for(i = 0; i<size;i++){
    printf("%d ",ar[size-i-1]);
   }
   printf("\n");
}
void printReverse2(int ar[], int size)
{/* using pointer ¨C Write your program code here */
   int i;
   printf("printReverse2(): ");
   for(i = 0; i<size;i++){
    printf("%d ",*(ar+size-i-1));
   }
   printf("\n");
}
void reverseAr1D(int ar[ ], int size)
{
   /* Write your program code here */
   int i;
   int q;
   for(i = 0;i<size/2;i++){
    q = ar[size-1-i];
    ar[size-1-i] = ar[i];
    ar[i] = q;
   }
}
2.
int findAr1D(int size, int ar[], int target)
{
   /* Write your program code here */
   int pos = -1;
   int i = 0;
   while(i<size){
    if(ar[i] == target){
        pos = i;
        break;
    }
    i = i+1;
   }
   return pos;
}
















3.
#include <stdio.h>
#define SIZE 3
void swap2Rows(int ar[][SIZE], int r1, int r2);
void swap2Cols(int ar[][SIZE], int c1, int c2);
void display(int ar[][SIZE]);
int main()
{
   int array[SIZE][SIZE];
   int row1, row2, col1, col2;
   int i,j;
   int choice;

   printf("Select one of the following options: \n");
   printf("1: getInput()\n");
   printf("2: swap2Rows()\n");
   printf("3: swap2Cols()\n");
   printf("4: display()\n");
   printf("5: exit()\n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            printf("Enter the matrix (3x3): \n");
            for (i=0; i<SIZE; i++)
               for (j=0; j<SIZE; j++)
                  scanf("%d", &array[i][j]);
            break;
         case 2:
            printf("Enter two rows for swapping: \n");
            scanf("%d %d", &row1, &row2);
            swap2Rows(array, row1, row2);
            printf("The new array is: \n");
            display(array);
            break;
         case 3:
            printf("Enter two columns for swapping: \n");
            scanf("%d %d", &col1, &col2);
            swap2Cols(array, col1, col2);
            printf("The new array is: \n");
            display(array);
            break;
         case 4:
            display(array);
            break;
      }
   } while (choice < 5);
   return 0;
}
void display(int ar[][SIZE])
{
   int l,m;
   for (l = 0; l < SIZE; l++) {
      for (m = 0; m < SIZE; m++)
         printf("%d ", ar[l][m]);
      printf("\n");
   }
}
void swap2Rows(int ar[][SIZE], int r1, int r2)
{
   /* Write your program code here */
   int change;
   int i;
   for(i = 0;i<3;i++){
    change = ar[r1][i];
    ar[r1][i] = ar[r2][i];
    ar[r2][i] = change;
   }
}
void swap2Cols(int ar[][SIZE], int c1, int c2)
{
   /* Write your program code here */
   int change;
   int i;
   for(i = 0;i<3;i++){
    change = ar[i][c1];
    ar[i][c1] = ar[i][c2];
    ar[i][c2] = change;
   }
}












4.
#include <stdio.h>
#define SIZE 10
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main()
{
   int ar[SIZE][SIZE], rowSize, colSize;
   int i,j;
   printf("Enter row size of the 2D array: \n");
   scanf("%d", &rowSize);
   printf("Enter column size of the 2D array: \n");
   scanf("%d", &colSize);
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &ar[i][j]);

   reduceMatrix2D(ar, rowSize, colSize);
   printf("reduceMatrix2D(): \n");
   display(ar, rowSize, colSize);
   return 0;
}
void display(int ar[][SIZE], int rowSize, int colSize)
{
   int l,m;
   for (l = 0; l < rowSize; l++) {
      for (m = 0; m < colSize; m++)
         printf("%d ", ar[l][m]);
      printf("\n");
   }
}
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
   /* Write your program code here */
   int i,j;
   for(i = 0;i<colSize;i++){
    for(j = rowSize-1;j>i;j--){
        ar[i][i] = ar[i][i] + ar[j][i];
        ar[j][i] = 0;
    }
   }
}



















5.
#include <stdio.h>
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
    int max1,max2;
    int ar[10],size,i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
    find2Max1D(ar,size,&max1,&max2);
    printf("Max1: %d\nMax2: %d\n",max1,max2);
    return 0;
}
void find2Max1D(int ar[], int size, int *max1, int *max2)
{
    /* Write your program code here */
    int k = 0;
    int j = 0;
    int check;
    int checklor;
    if (ar[0] >= ar[1]){
        *max1 = ar[0];
        *max2 = ar[1];
    }
    else{
        *max1 = ar[1];
        *max2 = ar[0];
    }
    for(k = 0;k<size;k++){
        check = ar[k];
        if (check >= *max1){
            *max1 = check;
        }
    }
    for(j = 0; j<size;j++){
        checklor = ar[j];
        if (checklor >= *max2 && checklor != *max1){
            *max2 = checklor;
        }
    }
}























6.
#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50],i,size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    /* Write your code here */
    int j = 0;
    int k = 0;
    int max = ar[0];
    int min = ar[0];
    int maxrcd;
    int minrcd;
    for (j = 0;j<size;j++){
        if (ar[j]>= max){
            max = ar[j];
            maxrcd = j;
        }
    }
    for(k = 0; k<size;k++){
        if (ar[k]<= min){
            min = ar[k];
            minrcd = k;
        }
    }
    ar[maxrcd] = min;
    ar[minrcd] = max;
}


























7.
#include <stdio.h>
#define SIZE 10
#define INIT_VALUE -1
int symmetry2D(int M[][SIZE], int rowSize, int colSize);
int main()
{
    int M[SIZE][SIZE],i,j, result = INIT_VALUE;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &M[i][j]);
    result=symmetry2D(M, rowSize, colSize);
    if (result == 1)
        printf("symmetry2D(): Yes\n");
    else if (result == 0)
        printf("symmetry2D(): No\n");
    else
        printf("Error\n");
    return 0;
}
int symmetry2D(int M[][SIZE], int rowSize, int colSize)
{
    /* Write your code here */
    if (rowSize != colSize) return 0;
    int p,q;
    int decision = 0;
    for(p =0; p<rowSize;p++){
        for(q=0;q<colSize;q++){
            if (M[p][q] != M[q][p]) decision++;
        }
    }
    if (decision == 0) return 1;
    else return 0;
}




























8.
#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;

   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize);
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
   int j, k, count;

   for(j = 0; j < rowSize; j++)
   {
      count = 0;
      for(k = 0; k < colSize; k++)
      {
         count++;
         if (k == (colSize-1) || data[j][k] != data[j][k+1])
         {
            printf("%d %d ", data[j][k], count);
            count = 0;
         }
      }
      printf("\n");
   }
}




























1.
#include <stdio.h>
char *sweepSpace1(char *sentence);
char *sweepSpace2(char *sentence);
int main()
{
   char str[80];

   printf("Enter the string: \n");
   gets(str);
   printf("sweepSpace1(): %s\n", sweepSpace1(str));
   printf("sweepSpace2(): %s\n", sweepSpace2(str));
   return 0;
}
char *sweepSpace1(char *sentence)
{
   int i, j, len;

   i=0; len=0;
   while (sentence[i]!='\0'){
      len++;
      i++;
   }
   j = 0;
   for (i=0; i < len; i++)
   {
      	if (sentence[i] != ' ')
      	{
             // update the string by removing any space detected
             if(sentence[i+1] == ' '){
                for(j = i+1;j<len;j++){
                    sentence[j] = sentence[j+1];
                }
             }
        }
    }
    return sentence;
}
char *sweepSpace2(char *sentence)
{
   /* Write your program code here */
    int i, j, len;

   i=0; len=0;
   while (sentence[i]!='\0'){
      len++;
      i++;}
   j = 0;
   for (i=0; i < len; i++)
   {
      	if (*(sentence+i) != ' ')
      	{
             // update the string by removing any space detected
             if(*(sentence+i+1) == ' '){
                for(j = i+1;j<len;j++){
                    *(sentence+j) = *(sentence+j+1);
                }
             }
        }
    }
    return sentence;
}
2.
#include <stdio.h>
char *stringncpy(char *s1, char *s2, int n);
int main()
{
   char sourceStr[40], targetStr[40], *target;
   int length;
   printf("Enter the string: \n");
   gets(sourceStr);
   printf("Enter the number of characters: \n");
   scanf("%d", &length);
   target = stringncpy(targetStr, sourceStr, length);
   printf("stringncpy(): %s\n", target);
   return 0;
}
char *stringncpy(char *s1, char *s2, int n)
{
   /* Write your program code here */
   int len2 = 0;
   int i;
   while(s2[len2] != '\0'){
    len2 = len2 +1;
   }
   if(len2<n){
    for(i=0;i<len2;i++){
        s1[i] = s2[i];
    }
    s1[len2] = '\0';
   }
   else{
    for(i= 0;i<n;i++){
        s1[i] = s2[i];
    }
    s1[n] = '\0';
   }
   return s1;
}

























3.
#include <stdio.h>
#include <string.h>
#define SIZE 10
#define INIT_VALUE 999
void printNames(char nameptr[][80], int size);
void readNames(char nameptr[][80], int *size);
int findTarget(char *target, char nameptr[][80], int size);
int main()
{
   char nameptr[SIZE][80], t[40];
   int size, result = INIT_VALUE;
   int choice;

   printf("Select one of the following options: \n");
   printf("1: readNames()\n");
   printf("2: findTarget()\n");
   printf("3: printNames()\n");
   printf("4: exit()\n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            readNames(nameptr, &size);
            break;
         case 2:
            printf("Enter target name: \n");
            scanf("\n");
            gets(t);
            result = findTarget(t, nameptr, size);
            printf("findTarget(): %d\n",  result);
            break;
         case 3:
            printNames(nameptr, size);
            break;
      }
   } while (choice < 4);
   return 0;
}
void printNames(char nameptr[][80], int size)
{
   /* Write your program code here */
   int i;
   for(i = 0;i<size;i++){
    printf("%s ",nameptr[i]);
   }
   printf("\n");
}
void readNames(char nameptr[][80], int *size)
{
   /* Write your program code here */
   int i;
   printf("Enter size:\n");
   scanf("%d",size);
   printf("Enter %d names:\n",*size);
   for(i = 0;i<*size;i++){
    scanf("%s",nameptr[i]);
   }
}
int findTarget(char *target, char nameptr[][80], int size)
{
   /* Write your program code here */
   int i;
   int pos = -1;
   for(i = 0;i<size;i++){
    if(strcmp(nameptr[i],target) == 0){
        pos = i;
    }
   }
   return pos;
}





















4.
#include <stdio.h>
#define INIT_VALUE -1
int palindrome(char *str);
int main()
{
   char str[80];
   int result = INIT_VALUE;

   printf("Enter a string: \n");
   gets(str);
   result = palindrome(str);
   if (result == 1)
      printf("palindrome(): A palindrome\n");
   else if (result == 0)
      printf("palindrome(): Not a palindrome\n");
   else
      printf("An error\n");
   return 0;
}
int palindrome(char *str)
{
   /* Write your code here */
   int len = 0;
   int signal = 1;
   int i;
   while(str[len] != '\0'){
    len = len + 1;
   }
   for(i = 0;i<len/2;i++){
    if(str[i] != str[len-1-i]){
        signal = 0;
    }
   }
   return signal;
}


























5.
#include <stdio.h>
#define INIT_VALUE 999
int stringcmp(char *s1, char *s2);
int main()
{
   char source[80], target[80];
   int result = INIT_VALUE;

   printf("Enter a source string: \n");
   gets(source);
   printf("Enter a target string: \n");
   gets(target);
   result = stringcmp(source, target);
   if (result == 1)
      printf("stringcmp(): greater than");
   else if (result == 0)
      printf("stringcmp(): equal");
   else if (result == -1)
      printf("stringcmp(): less than");
   else
      printf("stringcmp(): error");
   return 0;
}
int stringcmp(char *s1, char *s2)
{
   while (1) {
      if (*s1 == '\0' && *s2 == '\0')
         return 0;
      else if (*s1 == '\0')
         return -1;
      else if (*s2 == '\0')
         return 1;
      else if (*s1 < *s2)
         return -1;
      else if (*s1 > *s2)
         return 1;
      s1++;
      s2++;
   }
}









6.
#include <stdio.h>
void maxCharToFront(char *str);
int main()
{
    char str[80];

    printf("Enter a string: \n");
    gets(str);
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    /* Write your code here */
    int i =0;
    int j =0;
    int lgstidx=0;
    char lgstelm = str[0];
    while (str[i] != '\0'){
        if (str[i] > lgstelm){
            lgstelm = str[i];
            lgstidx = i;
        }
        i++;
    }
    char newstr[80];
    int gothrough=1;
    newstr[0] = lgstelm;
    for (gothrough = 1;gothrough <= lgstidx;gothrough++){
        newstr[gothrough] = str[gothrough-1];
    }
    for (gothrough = lgstidx +1;gothrough <=i ;gothrough++){
        newstr[gothrough] = str[gothrough];
    }
    for(j=0;j<=i;j++){
        str[j] = newstr[j];
    }
}









7.
#include <stdio.h>
int longWordLength(char *s);
int main()
{
   char str[80];
   printf("Enter a string: \n");
   gets(str);
   printf("longWordLength(): %d\n", longWordLength(str));
   return 0;
}
int longWordLength(char *s)
{
   int max=0,len=0;

   while ( *s!='\0' ) {
      while (((*s<='Z') && (*s >='A')) ||
         ((*s<='z') && (*s>='a')))  {
         len++; s++;
      }
      if (len>max) max=len;
      len=0; s++;
   }
   return max;
}

















8.
void insertChar(char *str1, char *str2, char ch)
{
   int i = 0;
   int j = 0;
   while(str1[i] != '\0'){
    if(j%4 == 3){str2[j] = ch;
                 j = j + 1;
    }
    else{
        str2[j] = str1[i];
        i = i + 1;
        j = j + 1;
    }
   }
   if(j%4 != 3){
   str2[j] = '\0';
               }
   else{str2[j] = ch;
        str2[j+1] = '\0';
       }

}
1.
#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("numDigits1(): %d\n", numDigits1(number));
   numDigits2(number, &result);
   printf("numDigits2(): %d\n", result);
   return 0;
}
int numDigits1(int num)
{
   /* Write your program code here */
   int count = 0;
   while (num != 0){
    count = count +1;
    num = num/10;
   }
   return count;
}
void numDigits2(int num, int *result)
{
   /* Write your program code here */
   int count = 0;
   while (num != 0){
    count = count +1;
    num = num/10;
   }
   *result = count;
}



























2.
#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
int main()
{
   int number, digit, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("Enter the digit: \n");
   scanf("%d", &digit);
   printf("digitPos1(): %d\n", digitPos1(number, digit));
   digitPos2(number, digit, &result);
   printf("digitPos2(): %d\n", result);
   return 0;
}
int digitPos1(int num, int digit)
{
   /* Write your program code here */
   int pos = 0;
   while(num != 0){
        pos = pos + 1;
    if (num%10 == digit) return pos;
    else{
            num = num/10;
        }
   }
   if (num == 0) return 0;

}
void digitPos2(int num, int digit, int *result)
{
   /* Write your program code here */
      int pos = 0;
   while(num != 0){
        pos = pos + 1;
    if (num%10 == digit) {
            *result = pos;
             break;
        }
    else{
            num = num/10;
        }
   }
   if (num == 0) *result = 0;
}















3.
int square1(int num)
{
   /* Write your program code here */
   int sum = 0;
   int i;
   for(i = 0;i<num;i++){
    sum = sum + 2*i + 1;
   }
   return sum;
}
void square2(int num, int *result)
{
   /* Write your program code here */
   int sum = 0;
   int i;
   for(i = 0;i<num;i++){
    sum = sum + 2*i + 1;
   }
   *result = sum;
}










4.
void inputXY(double *x1, double *y1, double *x2, double *y2)
{
   /* Write your code here */
   printf("Input x1 y1 x2 y2:\n");
   scanf("%lf %lf %lf %lf",x1,y1,x2,y2);
}
void outputResult(double dist)
{
   /* Write your code here */
   printf("%.2lf\n",dist);

}
double calDistance1(double x1, double y1, double x2, double y2)
{
   /* Write your code here */
    return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}
void calDistance2(double x1, double y1, double x2, double y2, double *dist)
{
   /* Write your code here */
    *dist = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
}








5.
#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
void printOutputs(int id, double grossPay);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);

int main()
{
   int id = -1, noOfHours, payRate;
   double grossPay;

   readInput(&id, &noOfHours, &payRate);
   while  (id != -1) {
      printf("computeSalary1(): ");
      grossPay = computeSalary1(noOfHours, payRate);
      printOutputs(id, grossPay);
      printf("computeSalary2(): ");
      computeSalary2(noOfHours, payRate, &grossPay);
      printOutputs(id, grossPay);
      readInput(&id, &noOfHours, &payRate);
   }
   return 0;
}
void readInput(int *id, int *noOfHours, int *payRate)
{
   printf("Enter ID (-1 to end): \n");
   scanf("%d", id);
   if (*id != -1) {
      printf("Enter number of hours: \n");
      scanf("%d", noOfHours);
      printf("Enter hourly pay rate: \n");
      scanf("%d", payRate);
   }
}
void printOutputs(int id, double grossPay)
{
   printf("ID %d grossPay %.2f \n", id, grossPay);
}
double computeSalary1(int noOfHours, int payRate)
{
   double grossPay;
   if (noOfHours > 160)
   {
      grossPay = 160 * payRate;
      noOfHours -= 160;
      if (noOfHours > 0)
         grossPay += noOfHours * 1.5 * payRate;
   }
   else
      grossPay = noOfHours * payRate;
   return grossPay;
}
void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
   if (noOfHours > 160)
   {
      *grossPay = 160 * payRate;
      noOfHours -= 160;
      if (noOfHours > 0)
         *grossPay += noOfHours * 1.5 * payRate;
   }
   else
      *grossPay = noOfHours * payRate;

}





6.
#include <stdio.h>
int divide1(int m, int n, int *r);
int divide2(int m, int n, int *q, int *r);
int main()
{
   int m, n, q, r;

   printf("Enter two numbers (m and n): \n");
   scanf("%d %d", &m, &n);
   q = divide1(m, n, &r);
   printf("divide1(): quotient %d remainder %d\n", q, r);
   divide2(m, n, &q, &r);
   printf("divide2(): quotient %d remainder %d\n", q, r);
   return 0;
}
int divide1(int m, int n, int *r)
{
   int q = 0;
   while (m >= n)
   {
      m = m-n;    /*(m-n) until m is less than n.*/
      q++;
   }
   *r = m;
   return q;
}
int divide2(int m, int n, int *q, int *r)
{
   *q=*r=0;
   while (m >= n)
   {
      m = m-n;    /*(m-n) until m is less than n.*/
      (*q)++;
   }
   *r = m;
}











7.
#include <stdio.h>
#define INIT_VALUE -1
int allEvenDigits1(int num);
void allEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("allEvenDigits1(): ");
   result = allEvenDigits1(number);
   if (result == 1)
      printf("All Even\n");
   else if (result == 0)
      printf("Not All Even\n");
   else
      printf("Error\n");
   allEvenDigits2(number, &result);
   printf("allEvenDigits2(): ");
   if (result == 1)
      printf("All Even\n");
   else if (result == 0)
      printf("Not All Even\n");
   else
      printf("Error\n");
   return 0;
}
int allEvenDigits1(int num)
{
   while (num != 0)
   {
      if ((num%10)%2 == 1)
         return 0;
      num /=10;
   }
   return 1;
}
void allEvenDigits2(int num, int *result)
{
   while (num != 0)
   {
      if ((num%10)%2 == 1) {
         *result = 0;
         return;
      }
      num /=10;
   }
   *result = 1;
}


















8.
#include <stdio.h>
#define INIT_VALUE 0
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extOddDigits1(): %d\n", extOddDigits1(number));
   extOddDigits2(number, &result);
   printf("extOddDigits2(): %d\n", result);
   return 0;
}
int extOddDigits1(int num)
{
   int power  = 1;
   int total = 0;
   int digit;

   while (num > 0) {
      digit = num % 10;
      num /= 10;
      if ((digit % 2) == 1) {
         total += digit * power;
         power *= 10;
      }
   }
   return (power == 1) ? -1 : total;
}
void extOddDigits2(int num, int *result)
{
   int power  = 1;
   int total = 0;
   int digit;

   while (num > 0) {
      digit = num % 10;
      num /= 10;
      if ((digit % 2) == 1) {
         total += digit * power;
         power *= 10;
      }
   }
   if (power == 1)
      *result = -1;
   else
      *result = total;
}
1.
#include <stdio.h>
int rNumDigits1(int num);
void rNumDigits2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("rNumDigits1(): %d\n", rNumDigits1(number));
   rNumDigits2(number, &result);
   printf("rNumDigits2(): %d\n", result);
   return 0;
}
int rNumDigits1(int num)
{
   /* Write your program code here */
   if(num<10) return 1;
   else return 1 + rNumDigits1(num/10);
}
void rNumDigits2(int num, int *result)
{
   /* Write your program code here */
   if(num<10) *result = 1;
   else {
        rNumDigits2(num/10,result);
        *result = *result + 1;
   }
}

2.
int rDigitPos1(int num, int digit)
{
   /* Write your program code here */
int p;
   if (num % 10 == digit)
      return 1;
   else if (num < 10)
      return 0;
   else {
      p = rDigitPos1(num/10, digit);
      if (p > 0)
         return p + 1;
      else
         return 0;
   }

}
void rDigitPos2(int num, int digit, int *pos)
{
   /* Write your program code here */
 if(num == 0){*pos = 0;}
 else{
 if (num%10 == digit){*pos = *pos + 1;}
 else {
        *pos = *pos + 1;
        rDigitPos2(num/10,digit,pos);
}
}
}














3.
#include <stdio.h>
int rSquare1(int num);
void rSquare2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("rSquare1(): %d\n", rSquare1(number));
   rSquare2(number, &result);
   printf("rSquare2(): %d\n", result);
   return 0;
}
int rSquare1(int num)
{
   /* Write your program code here */
   if(num == 1) return 1;
   else return 2*num -1 + rSquare1(num-1);
}
void rSquare2(int num, int *result)
{
   /* Write your program code here */
   if(num == 1) *result = *result + 1;
   else {
    *result = *result + 2*num -1;
    rSquare2(num-1,result);
   }
}

4.
#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a);
int main()
{
   int array[SIZE];
   int index, count, target, size;

   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d numbers: \n", size);
   for (index = 0; index < size; index++)
      scanf("%d", &array[index]);
   printf("Enter the target number: \n");
   scanf("%d", &target);
   count = rCountArray(array, size, target);
   printf("rCountArray(): %d\n", count);
   return 0;}
int rCountArray(int array[], int n, int a)
{
   /* Write your program code here */
   if (array[n-1] == a && n == 1) return 1;
   else if(n == 1) return 0;
   else if(array[n-1] == a){
    return 1 + rCountArray(array,n-1,a);
   }
   else{
    return rCountArray(array,n-1,a);
   }
}
5.
#include <stdio.h>
int rLookupAr(int array[], int size, int target);
int main()
{
   int numArray[80];
   int target, i, size;

   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d numbers: \n", size);
   for (i=0; i < size; i++)
      scanf("%d", &numArray[i]);
   printf("Enter the target number: \n");
   scanf("%d", &target);
   printf("rLookupAr(): %d", rLookupAr(numArray, size, target));
   return 0;
}
int rLookupAr(int array[], int size, int target)
{
   /* Write your code here */
   if (size == -1) return -1;
   else if(array[size-1] == target) return size-1;
   else {
       size = size -1;
       rLookupAr(array,size,target);
   }
}
















6.
#include <stdio.h>
#define INIT_VALUE -1
void rAllEvenDigits2(int num, int *result);
int main()
{
   int number, result=INIT_VALUE;

   printf("Enter a number: \n");
   scanf("%d", &number);
   rAllEvenDigits2(number, &result);
   if (result == 1)
      printf("rAllEvenDigits2(): yes\n");
   else if (result == 0)
      printf("rAllEvenDigits2(): no\n");
   else
      printf("rAllevenDigits2(): error\n");
   return 0;
}
void rAllEvenDigits2(int num, int *result)
{
   /* Write your code here */
   if (num < 10){
       if (num%2 == 1) *result = 0;
       else *result = 1;
   }
   else {
       if (num%2 == 1) *result = 0;
       else{
           num = num/10;
           rAllEvenDigits2(num,result);
       }
   }
}












7.
#include <stdio.h>
int rDigitValue1(int num, int k);
int main()
{
   int k, number;

   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("Enter k position: \n");
   scanf("%d", &k);
   printf("rDigitValue1(): %d\n", rDigitValue1(number, k));
   return 0;
}
int rDigitValue1(int num, int k)
{
   /* Write your code here */
   if(k == 1){
       return num%10;
   }
   else{
       k = k-1;
       num = num/10;
       rDigitValue1(num,k);
   }
}

















8.
Show/Hide submitted code
#include <stdio.h>
void rGcd2(int num1, int num2, int *result);
int main()
{
   int n1, n2, result;

   printf("Enter 2 numbers: \n");
   scanf("%d %d", &n1, &n2);
   rGcd2(n1, n2, &result);
   printf("rGcd2(): %d\n", result);
   return 0;
}
void rGcd2(int num1, int num2, int *result)
{
   /* Write your code here */
   if(num2 == 0) *result = num1;
   else{
        rGcd2(num2,num1%num2,result);
        }

}


1.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INIT_VALUE -1
struct circle {
   double radius;
   double x;
   double y;
};
int intersect(struct circle, struct circle);
int contain(struct circle *, struct circle *);
int main()
{
   struct circle c1, c2;
   int choice, result = INIT_VALUE;

   printf("Select one of the following options: \n");
   printf("1: intersect()\n");
   printf("2: contain()\n");
   printf("3: exit()\n");
   do {
      result=-1;
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            printf("Enter circle 1 (radius x y): \n");
            scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
            printf("Enter circle 2 (radius x y): \n");
            scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
            result = intersect(c1, c2);
            if (result == 1)
               printf("intersect(): intersect\n");
            else if (result == 0)
               printf("intersect(): not intersect\n");
            else
               printf("intersect(): error\n");
            break;
         case 2:
            printf("Enter circle 1 (radius x y): \n");
            scanf("%lf %lf %lf", &c1.radius, &c1.x, &c1.y);
            printf("Enter circle 2 (radius x y): \n");
            scanf("%lf %lf %lf", &c2.radius, &c2.x, &c2.y);
            result = contain(&c1, &c2);
            if (result == 1)
               printf("contain(): contain\n");
            else if (result == 0)
               printf("contain(): not contain\n");
            else
               printf("contain(): error\n");
            break;
      }
   } while (choice < 3);
   return 0;
}
int intersect(struct circle c1, struct circle c2)
{
	/* Write your program code here */
	double sumofr = c1.radius + c2.radius;
	double dist = sqrt(pow((c1.x-c2.x),2)+pow((c1.y-c2.y),2));
	if (dist <= sumofr) return 1;
	else return 0;
}
int contain(struct circle *c1, struct circle *c2)
{
	/* Write your program code here */
	double dist = sqrt(pow((c1->x-c2->x),2)+pow((c1->y-c2->y),2));
	if(c1->radius >= c2->radius + dist) return 1;
	else return 0;
}






















2.
#include <stdio.h>
typedef struct {
   float operand1, operand2;
   char op;
} bexpression;
float compute1(bexpression expr);
float compute2(bexpression *expr);
int main()
{
   bexpression e;
   int choice;

   printf("Select one of the following options: \n");
   printf("1: compute1()\n");
   printf("2: compute2()\n");
   printf("3: exit()\n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            printf("Enter expression (op1 op2 op): \n");
            scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
            printf("compute1(): %.2f\n", compute1(e));
            break;
         case 2:
            printf("Enter expression (op1 op2 op): \n");
            scanf("%f %f %c", &e.operand1, &e.operand2, &e.op);
            printf("compute2(): %.2f\n", compute2(&e));
            break;
      }
   } while (choice < 3);
   return 0;
}
float compute1(bexpression expr)
{
   /* Write your program code here */
   if(expr.op == '+') return expr.operand1 + expr.operand2;
   if(expr.op == '-') return expr.operand1 - expr.operand2;
   if(expr.op == '/') return expr.operand1 / expr.operand2;
   if(expr.op == '*') return expr.operand1 * expr.operand2;
}
float compute2(bexpression *expr)
{
   /* Write your program code here */
   if(expr->op == '+') return expr->operand1 + expr->operand2;
   if(expr->op == '-') return expr->operand1 - expr->operand2;
   if(expr->op == '/') return expr->operand1 / expr->operand2;
   if(expr->op == '*') return expr->operand1 * expr->operand2;
}











3.
#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testscore+examscore)/2 */
};
double average();
int main()
{
   printf("average(): %.2f\n", average());
   return 0;
}
double average()
{
   struct student stud[50];
   double sum = 0;
   int i;

   /* get student scores */
   i=0;
   printf("Enter student name: \n");
   gets(stud[i].name);
   while (strcmp(stud[i].name, "END")!=0)
   {
      printf("Enter test score: \n");
      scanf("%lf", &stud[i].testScore);
      printf("Enter exam score: \n");
      scanf("%lf", &stud[i].examScore);
      /* compute total */
      stud[i].total = (stud[i].testScore + stud[i].examScore)/2;
      printf("Student %s total = %.2f\n", stud[i].name, stud[i].total);
      sum += stud[i].total;
      i++;
      printf("Enter student name: \n");
      scanf("\n");
      gets(stud[i].name);
   }
   if (i != 0)
      return (sum/i);
   else
      return 0;
}







4.
#include <stdio.h>
#define INIT_VALUE 1000
typedef struct {
   int id;		      /* staff identifier */
   int totalLeave;	/* the total number of days of leave allowed */
   int leaveTaken;	/* the number of days of leave taken so far */
} leaveRecord;
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void getInput(leaveRecord list[], int *n);
void printList(leaveRecord list[], int n);
int main()
{
   leaveRecord listRec[10];
   int len;
   int id, leave, canTake=INIT_VALUE;
   int choice;

   printf("Select one of the following options: \n");
   printf("1: getInput()\n");
   printf("2: printList()\n");
   printf("3: mayTakeLeave()\n");
   printf("4: exit()\n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            getInput(listRec, &len);
            printList(listRec, len);
            break;
         case 2:
            printList(listRec, len);
            break;
         case 3:
            printf("Please input id, leave to be taken: \n");
            scanf("%d %d", &id, &leave);
            canTake = mayTakeLeave(listRec, id, leave, len);
            if (canTake == 1)
               printf("The staff %d can take leave\n", id);
            else if (canTake == 0)
               printf("The staff %d cannot take leave\n", id);
            else if (canTake == -1)
               printf("The staff %d is not in the list\n", id);
            else
               printf("Error!");
            break;
      }
   } while (choice < 4);
   return 0;
}
void printList(leaveRecord list[], int n)
{
   int p;

   printf("The staff list:\n");
   for (p = 0; p < n; p++)
      printf ("id = %d, totalleave = %d, leave taken = %d\n",
         list[p].id, list[p].totalLeave, list[p].leaveTaken);
}
void getInput(leaveRecord list[], int *n)
{
   int total;

   *n = 0;
   printf("Enter the number of staff records: \n");
   scanf("%d", &total);
   while ( (*n) != total) {
      printf("Enter id, totalleave, leavetaken: \n");
      scanf("%d  %d  %d", &list[*n].id, &list[*n].totalLeave,&list[*n].leaveTaken);
      (*n)++;
   }
}
int mayTakeLeave(leaveRecord list[], int id, int leave, int n)
{
   int p;

   for (p = 0; p < n; p++)
      if (list[p].id == id)
         return (list[p].totalLeave >= (list[p].leaveTaken + leave));
   return -1;
}











5.
#include <stdio.h>
#include <string.h>
#define SIZE 50
typedef struct {
    int id;
    char name[50];
} Student;
void inputStud(Student *s, int size);
void printStud(Student *s, int size);
int removeStud(Student *s, int *size, char *target);
int main()
{
    Student s[SIZE];
    int size=0, choice;
    char target[80];
    int result;

    printf("Select one of the following options: \n");
    printf("1: inputStud()\n");
    printf("2: removeStud()\n");
    printf("3: printStud()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter size: \n");
                scanf("%d", &size);
                printf("Enter %d students: \n", size);
                inputStud(s, size);
                break;
            case 2:
                printf("Enter name to be removed: \n");
                scanf("\n");
                gets(target);
                printf("removeStud(): ");
                result = removeStud(s, &size, target);
                if (result == 0)
                    printf("Successfully removed\n");
                else if (result == 1)
                    printf("Array is empty\n");
                else if (result == 2)
                    printf("The target does not exist\n");
                else
                    printf("An error has occurred\n");
                break;
            case 3:
                printStud(s, size);
                break;
        }
    } while (choice < 4);
    return 0;
}
void inputStud(Student *s, int size)
{
    /* write your code here */
    int i = 0;
    char dummy;
    while(i < size){
        printf("Student ID: \n");
        scanf("%d",&s[i].id);
        printf("Student Name: \n");
        scanf("\n",&dummy);
        gets(s[i].name);
        i++;
    }
}
void printStud(Student *s, int size)
{
    /* write your code here */
    int k =0;
    printf("The current student list: \n");
    if(size == 0){printf("Empty array\n");}
    else{
        for (k = 0;k<size;k++){
            printf("Student ID: %d Student Name: %s\n",s[k].id,s[k].name);
        }
    }
}
int removeStud(Student *s, int *size, char *target)
{
    /* write your code here */
    int j =0;
    int k =0;
    if(*size == 0) return 1;
    for(j = 0; j<*size;j++){
        if (strcmp(s[j].name,target) ==0){
            for(k = j;k <*size;k++){
                s[k] = s[k+1];
            }
            *size = (*size)-1;
            return 0;
        }
    }
    return 2;
}









6.
#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[40];
   char telno[40];
   int id;
   double salary;
} Employee;
int readin(Employee *p);
void printEmp(Employee *p, int size) ;
int search(Employee *p, int size, char *target);
int addEmployee(Employee *p, int size, char *target);
int main()
{
   Employee emp[MAX];
   char name[10];
   int k, size, found=0, ans, choice, result;

   printf("Select one of the following options: \n");
   printf("1: readin() \n");
   printf("2: search() \n");
   printf("3: addEmployee() \n");
   printf("4: print() \n");
   printf("5: exit() \n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            size = readin(emp);
            break;
         case 2:
            printf("Enter search name: \n");
            scanf("\n");
            gets(name);
            result = search(emp,size,name);
            if (result != 1)
               printf ("Name not found! \n");
            break;
         case 3:
            printf("Enter new name: \n");
            scanf("\n");
            gets(name);
            result = search(emp,size,name);
            if (result != 1)
               size = addEmployee(emp, size, name);
            else
               printf("The new name has already existed in the database");
            break;
         case 4:
            printEmp(emp, size);
            break;
         default:
            break;
      }
   } while (choice < 5);
   return 0;
}
int readin(Employee *p)
{
   int size=0;
   while (1) {
      printf("Enter name: \n");
      scanf("\n");
      gets(p->name);
      if (strcmp(p->name, "#")==0)
         break;
      printf("Enter tel: \n");
      gets(p->telno);
      printf("Enter id: \n");
      scanf("%d", &p->id);
      printf("Enter salary: \n");
      scanf("%lf", &p->salary);
      p++;
      size++;
   }
   return size;
}
void printEmp(Employee *p, int size)
{
   int i;

   printf("The current employee list: \n");
   if (size==0)
      printf("Empty array\n");
   else
   {
      for (i=0; i<size; i++)
         printf("%s %s %d %.2f\n",p[i].name,p[i].telno,p[i].id,p[i].salary);
   }
}
int search(Employee *p, int size, char *target)
{
   int i;
   for (i=0;i<size;i++,p++){
      if (strcmp(p->name,target)==0){
         printf("Employee found at index location: %d \n", i);
         printf("%s %s %d %.2f \n",target,p->telno,p->id,p->salary);
         return 1;
      }
   }
   if (i==size)
      return 0;
}
int addEmployee(Employee *p, int size, char *target)
{
   int k;
   if (size<MAX) {
      strcpy(p[size].name, target);
      printf("Enter tel: \n");
      scanf("%s", p[size].telno);
      printf("Enter id: \n");
      scanf("%d", &p[size].id);
      printf("Enter salary: \n");
      scanf("%lf", &p[size].salary);
      printf("Added at position: %d\n", size);
      size++;
   }
   else 	{
      printf("Database is full\n");
   }
   return size;
}
















7.
#include <stdio.h>
#include <math.h>
typedef struct {
    double x;
    double y;
} Point;
typedef struct {
    Point topLeft;    /* top left point of rectangle */
    Point botRight;   /* bottom right point of rectangle */
} Rectangle;
Rectangle getRect();
void printRect(Rectangle r);
double findArea(Rectangle r);
int main()
{
    Rectangle r;
    int choice;

    printf("Select one of the following options:\n");
    printf("1: getRect()\n");
    printf("2: findArea()\n");
    printf("3: printRect()\n");
    printf("4: exit()\n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("getRect(): \n");
                r = getRect();
                break;
            case 2:
                printf("findArea(): %.2f\n", findArea(r));
                break;
            case 3:
                printf("printRect(): \n");
                printRect(r);
                break;
            default:
                break;
        }
    } while (choice < 4);
    return 0;
}
Rectangle getRect()
{
    /* write your code here */
    Rectangle rect;
    printf("Enter top left point: \n");
    scanf("%lf %lf",&rect.topLeft.x,&rect.topLeft.y);
    printf("Enter bottom right point: \n");
    scanf("%lf %lf",&rect.botRight.x,&rect.botRight.y);
    return rect;
}
void printRect(Rectangle r)
{
    /* write your code here */
    printf("Top left point: %.2lf %.2lf\n",r.topLeft.x,r.topLeft.y);
    printf("Bottom right point: %.2lf %.2lf\n",r.botRight.x,r.botRight.y);
}
double findArea(Rectangle r)
{
    /* write your code here */
    double recarea;
    recarea = (r.botRight.x - r.topLeft.x)*(r.topLeft.y - r.botRight.y);
    if (recarea < 0){recarea = -recarea;}
    return recarea;
}


8.
#include <stdio.h>
#include <math.h>
typedef struct {
    double real;
    double imag;
} Complex;
Complex add(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex sub(Complex *c1, Complex *c2);
Complex divide(Complex *c1, Complex *c2);
int main()
{
    int choice;
    Complex input1, input2, result;

    printf("Complex number operations: \n");
    printf("1 - addition \n");
    printf("2 - subtraction \n");
    printf("3 - multiplication \n");
    printf("4 - division \n");
    printf("5 - quit \n");
    do {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        if (choice == 5)
            return 0;
        printf("Enter Complex Number 1: \n");
        scanf("%lf %lf", &input1.real, &input1.imag);
        printf("Enter Complex Number 2: \n");
        scanf("%lf %lf", &input2.real, &input2.imag);
        switch (choice) {
            case 1: result = add(input1, input2);
                break;
            case 2: result = sub(&input1, &input2);
                break;
            case 3: result = mul(input1, input2);
                break;
            case 4: result = divide(&input1, &input2);
                break;
        }
        printf("complex(): real %.2f imag %.2f\n",
               result.real, result.imag);
    } while (choice<5);
    return 0;
}
Complex add(Complex c1, Complex c2)
{
    /* write your code here */
    Complex rst;
    rst.real = c1.real + c2.real;
    rst.imag = c1.imag + c2.imag;
    return rst;
}
Complex sub(Complex *c1, Complex *c2)
{
    /* write your code here */
    Complex rst;
    rst.real = c1->real - c2->real;
    rst.imag = c1->imag - c2->imag;
    return rst;

}
Complex mul(Complex c1, Complex c2)
{
    /* write your code here */
    Complex rst;
    rst.real = c1.real * c2.real - c1.imag * c2.imag;
    rst.imag = c1.imag * c2.real + c2.imag * c1.real;
    return rst;

}
Complex divide(Complex *c1, Complex *c2)
{
    /* write your code here */
    Complex rst;
    rst.real = (c1->real * c2->real + c1->imag * c2->imag)/(c2->real * c2->real + c2->imag * c2->imag);
    rst.imag = (c1->imag * c2->real - c1->real * c2->imag)/(c2->real * c2->real + c2->imag * c2->imag);
    return rst;
}
