#include<stdio.h> 
int maze(int cr, int cc , int er , int ec){  // cr=current row, cc= current column , er = ending row , ec =  ending column
int rightWays = 0;
int downWays = 0;

if(cr==er && cc==ec)return 1; // aauta bato bhetyo destination pugni
if(cr==er){
    rightWays += maze(cr,cc+1,er,ec);  //rightWays = rightWays + maze(cr,cc+1,er,ec);
}

if(cc==ec){
    downWays += maze(cr+1,cc,er,ec);  // downWays= downWays + maze(cr+1,cc,er,ec);
}

if(cc<ec && cr<er){
    rightWays += maze(cr,cc+1,er,ec); 
    downWays += maze(cr+1,cc,er,ec);

}



int totalWays= rightWays + downWays;
return totalWays;
}



int main(){
int n,m;
printf("Enter number of rows:");
scanf("%d",&n);
printf("Enter number of columns : ");
scanf("%d",&m);

int NoOfWays = maze(1,1,n,m);
printf("The number of ways to reach mazes destination is %d",NoOfWays);

    return 0;
}
