#include <iostream>
using namespace std;

int main(){
   int n,s,gsum,sum,pt;
    cout<<"how many student? ";
    cin>>n;
    cout<<"enter the number of semisters: ";
    cin>>s;
    int crs[20];
      for(int j=0,i=1;i<=s;j++,i++){
        cout<<" enter the number of courses in semister "<<i<<": ";
        cin>>crs[j];
      }
    float cgpa[30],gpa[n][s],mark[20][20][20];
    char grd[20][10][10];
    string name[100];
      for(  int m=0,l=1,p=0;p<n;m++,l++,p++){
            cout<<"Enter the name of the student "<<l<<": ";
            cin>>name[p];
            gsum=0;
      for(int f=0,j=0,t=1;f<s,t<=s;f++,j++,t++){
        sum=0;

          for(int g=0,h=1;g<h,h<=crs[j];g++,h++) {
              cout<<"enter the mark(out of 100%) of the course "<<h<<" semister "<<t<<" : ";
                cin>>mark[p][f][g];
                if(mark[p][f][g]>=85){
                  pt=4;
                  grd[p][f][g]='A';}
                  else if (mark[p][f][g]<85 && mark[p][f][g]>=70){
                  pt=3;
                  grd[p][f][g]='B'; }
                  else if (mark[p][f][g]<70 && mark[p][f][g]>=50){
                  pt=2;
                  grd[p][f][g]='C';}
                  else{
                  pt=0;
                  grd[p][f][g]='F' ; }
            sum+=(pt*3);

          }
        gpa[p][f]=sum/(3*crs[j]);
         gsum+=(gpa[p][f]);
      }
       cgpa[p]=gsum/s;
      }
     cout<<"  name    ";
      for(int k=0,a=1;a<=s;k++,a++){
       for(int b=1;b<=crs[k];b++){
                cout<<"sem"<<a<<"-c"<<b<<"    ";
       }
          cout<<"gpa"<<a<<"     ";
      }cout<<"cgpa"<<endl;

        for(int j=0;j<n;j++){
            cout<<j+1<<"."<<name[j]<<"        ";
            for(int i=1,k=0;i<=s;i++,k++){

                for(int b=1,a=0;b<=crs[k];b++,a++){
                cout<<grd[j][k][a]<<"         ";
               }
               cout<<gpa[j][k]<<"         ";
        }
            cout<<cgpa[j]<<endl;
        }
}
