#include<stdio.h>
#include<string.h>
int main ()
{
char a [100];
printf ("Enter any String:");
gets(a);
int p = 0, k;
for (k = 0; k < strlen(a); k ++) {
if (a[k]=='0' || a[k] == '1')
p = 0;
else {
p = 1;
break;
}}
int c = 0;
 if (p == 1)
 printf ("Invalid input ");
 else {
 for (k = 0; k < strlen(a); k++) {
 if (a[k] == '0') {
 if (a[k+1] == '1') {
 if (a[k+2] == '1') {
 c = 1;

break;
 }}}}
 if (c == 1)
printf ("ACCEPT");
 else
printf (" Not ACCEPT ");

 }
 }
