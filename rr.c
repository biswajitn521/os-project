#include<stdio.h>

#include<math.h>

int main()

{

int queue[20],n,head,i,j,k,seek=0,max,diff,temp,queue1[20],queue2[20],

temp1=0,temp2=0;

float avg;
max=4999;
printf("the max range of disk %d\n",max);
head=125;
printf("the point starting is %d\n",head);
n=10;
printf("the range is from 0 to 4999 \n");

printf("enter the queue nos as follows ::143,86,1470,913,1774,948,1509,1022,1750,130\n");



printf("Enter the queue of disk positions to be read\n");

for(i=1;i<=n;i++)

{

scanf("%d",&temp);

if(temp>=head)

{

queue1[temp1]=temp;

temp1++;

}

else

{

queue2[temp2]=temp;

temp2++;

}

}

for(i=0;i<temp1-1;i++)

{

for(j=i+1;j<temp1;j++)

{

if(queue1[i]>queue1[j])

{

temp=queue1[i];

queue1[i]=queue1[j];

queue1[j]=temp;

}

}

}

for(i=0;i<temp2-1;i++)

{

for(j=i+1;j<temp2;j++)

{

if(queue2[i]>queue2[j])

{

temp=queue2[i];

queue2[i]=queue2[j];

queue2[j]=temp;

}

}

}

for(i=1,j=0;j<temp1;i++,j++)

queue[i]=queue1[j];

queue[i]=max;

queue[i+1]=0;

for(i=temp1+3,j=0;j<temp2;i++,j++)

queue[i]=queue2[j];

queue[0]=head;

for(j=0;j<=n+1;j++)

{

diff=abs(queue[j+1]-queue[j]);

seek+=diff;

printf("Disk head moves from %d to %d with seek %d\n",queue[j],queue[j+1],diff);

}

printf("Total seek time is %d\n",seek);

avg=seek/(float)n;

printf("Average seek time is %f\n",avg);

return 0;

}
