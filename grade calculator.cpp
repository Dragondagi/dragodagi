#include <iostream>
#include <cstring>
using namespace std;

int main(){
   int n,gsum,sum,pt;
   int crs[20][20],chr[20][20][20],s[20];
   char ans,wer;
   string name[100];
   cout<<"THIS IS A PROGRAM FOR CALCULATING GPA ANF CGPA!!!!"<<endl<<endl;
   // So the process goes again , I used do-while.
   do{
        // a go-to loop for invalid inputs.
        loop:
        cout<<"How many student? ";
        cin>>n;
     if(n==1) ans='1';
     else if(n>1){
            label:
        cout<<"do the students have the same semester and course? Enter: 1)yes or 2)no: ";
        cin>>ans;
        }
        else goto loop;
        //used switch statement for similar(semester and course) and different(semester and course).
        switch(ans){
            case '1':
                   {
                    cout<<"Enter the number of semesters: ";
                    cin>>s[0];
                    int crs[20],chr[20][20][20];
                      for(int j=0,i=1;i<=s[0];j++,i++){
                        cout<<" Enter the number of courses in semester "<<i<<": ";
                        cin>>crs[j];
                      }
                    float cgpa[30],gpa[20][20],mark[20][20][20];
                    char grd[20][10][10];

                      for(  int m=0,l=1,p=0;p<n;m++,l++,p++){
                            cout<<"\n Enter the first name of the student "<<l<<": ";
                            cin>>name[p];
                            gsum=0;
                      for(int f=0,j=0,t=1;f<s[0],t<=s[0];f++,j++,t++){
                        sum=0;

                          for(int g=0,h=1;g<h,h<=crs[j];g++,h++) {
                                label3:
                              cout<<"Enter the mark(out of 100%) of the course "<<h<<" semester "<<t<<" : ";
                                cin>>mark[p][f][g];
                                cout<<"     and the credit hour: ";
                                cin>>chr[p][f][g];
                                if(mark[p][f][g]<=100 && mark[p][f][g]>=85){
                                  pt=4;
                                  grd[p][f][g]='A';}
                                  else if (mark[p][f][g]<85 && mark[p][f][g]>=70){
                                  pt=3;
                                  grd[p][f][g]='B'; }
                                  else if (mark[p][f][g]<70 && mark[p][f][g]>=50){
                                  pt=2;
                                  grd[p][f][g]='C';}
                                  else if (mark[p][f][g]<50 && mark[p][f][g]>=0){
                                  pt=0;
                                  grd[p][f][g]='F' ; }
                                  else{cout<<"*************TRY AGAIN***********"<<endl;goto label3;}
                            sum+=(pt*chr[p][f][g]);

                          }
                        gpa[p][f]=sum/(3*crs[j]);
                         gsum+=(gpa[p][f]);
                      }
                       cgpa[p]=gsum/s[0];
                      }
                     cout<<"\n  Name \t \t";
                      for(int k=0,a=1;a<=s[0];k++,a++){
                       for(int b=1;b<=crs[k];b++){
                                cout<<"sem"<<a<<"-c"<<b<<"\t \t";
                       }
                          cout<<"GPA"<<a<<"\t \t";
                      }cout<<"CGPA"<<endl;

                        for(int j=0;j<n;j++){
                            cout<<j+1<<"."<<name[j]<<"\t \t";
                            for(int i=1,k=0;i<=s[0];i++,k++){

                                for(int b=1,a=0;b<=crs[k];b++,a++){
                                cout<<grd[j][k][a]<<"\t \t";
                               }
                               cout<<gpa[j][k]<<"\t \t";
                        }
                            cout<<cgpa[j]<<endl;
            }

            break;}
            case '2':{
                      for(int b=0,a=1;a<=n;b++,a++){
                        cout<<"enter the number of semester for student "<<a<<": ";
                        cin>>s[b];
                          for(int j=0,i=1;i<=s[b];j++,i++){
                            cout<<" enter the number of courses in semester "<<i<<": ";
                            cin>>crs[b][j];
                          }
                        }
                        float cgpa,gpa[20][20],mark[20][20][20];
                        char grd[20][10][10];

                          for(  int l=1,p=0;p<n;l++,p++){
                                cout<<"\n Enter the name of the student "<<l<<": ";
                               cin>>name[p];
                          for(int f=0,j=0,t=1;f<s[p],t<=s[p];f++,j++,t++){
                            sum=0;

                              for(int g=0,h=1;g<h,h<=crs[p][j];g++,h++) {
                                  cout<<"enter the mark(out of 100%) of the course "<<h<<" semester "<<t<<" : ";
                                  cin>>mark[p][f][g];
                                      cout<<"     and the credit hour: ";
                                      cin>>chr[p][f][g];
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
                                sum+=(pt*chr[p][f][g]);

                              }
                            gpa[p][j]=sum/(3*crs[p][j]);
                             }
                          }


                          for(int j=0;j<n;j++){
                                gsum=0;
                          cout<<"\n ******"<<name[j]<<"******"<<endl;
                          for(int i=1,k=0;i<=s[j];i++,k++){


                                   gsum+=gpa[j][k];
                                   cgpa=gsum/s[j];
                                   for(int b=1,a=0;b<=crs[j][k];b++,a++){
                                    cout<<"\t grade sem"<<i<<" c"<<b<<" is: "<<grd[j][k][a]<<endl;
                                   }
                                    cout<<"  ---> GPA sem"<<i<<" is: "<<gpa[j][k]<<endl;
                            }
                            cout<<"####CGPA="<<cgpa<<endl<<endl<<endl;
                          }
                          break;}
        default: goto label; break;
                                }
        label2:
        cout<<"\n do you want to go again? 1)yes or 2)no : ";
        cin>>wer;
        if(wer!='1' && wer!='2') goto label2;
   }while(wer=='1');



}

