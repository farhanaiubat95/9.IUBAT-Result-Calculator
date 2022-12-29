#include<bits/stdc++.h>
#include<iomanip>
#include<string>
using namespace std;
class Result
{
private:
    int id;
public:
    string n , nam[50];
    float c_g[50];
    int credit_h[50],n1,i;

    void info()
    {
        float a=4.0,bpl=3.7,b=3.4,bmin=3.1,cpl=2.8,c=2.5,cmin=2.2,dpl=1.5,d=1.0,f=0.0;
    float inc=0.0,w=0.0,aud=0.0,e=0.0,pf=0.0;
    cout<<"A = "<<a<<"    "<<"B+ = "<<bpl<<endl;
    cout<<"B = "<<b<<"    "<<"B- = "<<bmin<<endl;
    cout<<"C+ = "<<cpl<<"    "<<"C = "<<c<<endl;
    cout<<"C- = "<<cmin<<"    "<<"D+ = "<<dpl<<endl;
    cout<<"D = "<<d<<"    "<<"F = "<<f<<endl;
    cout<<"I = "<<inc<<"(Incomplete)"<<"    "<<"W = "<<w<<"(Course Withdrawal)"<<endl;
    cout<<"Aud = "<<aud<<"(Audit)"<<"    "<<"E = "<<e<<"(Exempted)"<<endl;
    cout<<"P/F = "<<pf<<"(Pass/Fail)"<<"    "<<"R = "<<"(Course Repeated)"<<endl;
    cout<<"   ============================================================================   "<<endl;
    cout<<"!"<<endl;
    cout<<"!"<<endl;
    cout<<"!"<<endl;
         cout<<"Student ID =  ";
         cin>>id;
         cout<<"Student Name =  ";
         cin>>n;
    }
    void course()
    {
        cout<<"How many coruse result do you want to calculate?"<<endl;
        cin>>n1;
        cout<<"Please enter Course Code , Grade & Credit hour..."<<endl;
        for(i=0;i<n1;i++)
        {
          cout<<i+1<<".Course code = ";
          cin>>nam[i];
          cout<<"  Grade = ";
          cin>>c_g[i];
          cout<<"  Credit Hour = ";
          cin>>credit_h[i];
        }
    }
    float total()
    {
        float sum=0.0;
        for(i=0;i<n1;i++)
        {
          sum=sum+c_g[i]*credit_h[i];
        }
        return sum;
    }

  float sum_cre()
    {
        float credt=0.0;
       for(i=0;i<n1;i++)
       {
         credt=credt+credit_h[i];
       }
  return credt;
    }
    float avrg()
    {
        float cgpa;
        cgpa=total()/sum_cre();
        return cgpa;
    }
void display()
{
    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"                ----------------------------------------------------------------------------------------------------------------------------------                "<<endl<<endl<<endl<<endl;
     cout<<"Student ID =  "<<id<<endl;
     cout<<"Student Name =  "<<n<<endl;
     for(i=0;i<n1;i++)
        {
          cout<<i+1<<". Course code = "<<nam[i]<<"       "<<"Grade = "<<c_g[i]<<"       "<<"Credit Hour = "<<credit_h[i]<<endl;
        }
        cout<<"->Total Grade Point = "<<total()<<endl;
     cout<<"->Total Credit hour = "<<sum_cre()<<endl;
     cout<<"->CGPA = "<<setprecision(2)<<fixed<<avrg()<<endl;
     float cgpa1= avrg();
     if(cgpa1>=3.1 && cgpa1<=4.00)
     {
        cout<<"->Status = 'Good'"<<endl;
     }else if(cgpa1>1.5 && cgpa1<=3.1)
     {
        cout<<"->Status = 'Fair'"<<endl;
     }else if(cgpa1>=1.0 && cgpa1<=1.5)
    {
        cout<<"->Status = 'Passing'"<<endl;
    }else
    {
      cout<<"->Status = 'Failing'"<<endl;
    }
}
};
int main()
{
    Result s1;
    s1.info();
    s1.course();
    s1.display();
    return 0;
}
