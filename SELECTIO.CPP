#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i,j,temp,n,arr[30];
cout<<"Enter the no of element:\n";
cin>>n;
cout<<"Enter elements in an array:";
for(i=0;i<n;i++)
{
 cin>>arr[i];
}
for(i=0;i<n;i++)
{
 for(j=i;j<n;j++)
 {
  if(arr[j]<arr[i])
  {
  temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
  }
 }
 }
cout<<"sorted array is:";
for(i=0;i<n;i++)
{
 cout<<arr[i]<<endl;
}
 getch();
}
