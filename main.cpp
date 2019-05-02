#include<iostream>
using namespace std;
const int MAX=50;
class Set
{
 public:
    int data[MAX];
      int n;
  public:
    Set()
    {
        n=-1;
    }
    void insert_ele(int);
    void delete_ele(int);
    void show(int);
    void union_ele(int,int);
    void inter_ele(int,int);
    void subset(int,int);
    void difference(int,int);
    void size_set(int);
};
void insert_ele(int ele)
{
    int n,data[MAX];
    cout<<"Enter number of elements you want to enter:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>data[i];
    }
    data[0]=n;
}
void delete_ele(int ele)
{
    int data[MAX];

    int num=data[0];
    cout<<"Enter element you want to delete:";
    cin>>ele;
    for(int i=1;i<=num;i++)
    {
        if(ele=data[i])
            data[i]==NULL;
        else
            cout<<"Element not found";
    }
}
void show(int s1)
{
    int data[MAX];
    int num=data[0];
    cout<<"Elemets in set:";
    for(int i=1;i<=num;i++)
    {
        cout<<" "<<"\n";
        cout<<data[i];
    }
}
void union_ele(int s1,int s2)
{
     int s3[50];
     int data[MAX];
  int n=data[0];
 int flag=0;
 for(int i=0;i<=n;i++)
 {
     s3.data[i]=s1.data[i];
 }
 for(int j=0;j<=s2.n;j++)
 {
  flag=0;
  for(i=0;i<=s1.n;i++)
  {
   if(s1.data[i]==s2.data[j])
   {
    flag=1;
    break;
   }
  }
  if(flag==0)
  {
   s3.insert(s2.data[j]);

  }
 }

 return s3;
}
void inter_ele(int s1, int s2)
{
     int s3;
 for(int i=0;i<=s1.n;i++)
 {
  for(int j=0;j<=s2.n;j++)
  {
   if(s1.data[i]==s2.data[j])
   {
    s3.insert(s1.data[i]);
    break;
   }
  }
 }
 return s3;
}
void subset( int s1, int s2)
{
    int count=0;
 int size=s2.size();
 for(int i=0;i<=n;i++)
 {
  for(int j=0;j<=s2.n;j++)
  {
   if(data[i]==s2.data[j])
   {
    count++;
    break;
   }
  }
 }
 if(count==size)
 {
  return true;
 }
 return false;
}
void difference(int s1,int s2)
{
    int s3;
 int flag=1;
 for(int i=0;i<=s1.n;i++)
 {
  for(int j=0;j<=s2.n;j++)
  {
   if(s1.data[i]==s2.data[j])
   {
    flag=0;
    break;
   }
   else flag=1;
  }
  if(flag==1)
  {
   s3.insert(s1.data[i]);

  }
 }
 return s3;
}
void size_set(int s1)
{
    int j=0;
    int num=data[0];
    cout<<"Size of set:";
    for(int i=1;i<=num;i++)
        {
            j++;
        }
}
int main()
{
    int data[MAX],choice;
    Set st;
    do
    {
        cout<<"\nOperations:\n1.Create\n2.Remove element\n3.Display\n4.Union of 2 sets\n5.Intersection of 2 sets\n6.Difference(A-B)\n7.Difference(B-A)\n8.Subset (A of B)\n9.Subset(B of A)\n10.Size of Set A\n11.Size of Set B\n12.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:st.insert_ele(s1);
                   cout<<"Want to enter another set?";
                   char ans;
                   cin>>ans;
                   if(ans=="y"||ans=="Y")
                   {
                       st.insert_ele(s2);
                   }
                   break;
           case 2: data[0]=n;
                   st.delete_ele(ele);
                   break;
           case 3:data[0]=n;
                  cout<<"Set A:";
                  st.show(s1);
                  cout<<"Set B:";
                  st.show(s2);
                  break;
           case 4:st.union_ele(s1,s2);
                  cout<<"Union of 2 sets:";
                  st.show(s3);
           case 5:st.inter_ele(s1,s2);
                  cout<<"Intersection of 2 sets:";
                  st.show(s3);
           case 6:st.difference(s1,s2);
                  cout<<"Difference in set A & B:";
                  st.show(s3);
                  break;
            case 7:st.difference(s2,s1);
                   cout<<"Difference in set B & A:";
                   st.show(s3);
                   break;
            case 8:st.subset(s1,s2);
                   break;
            case 9:st.subset(s2,s1);
                   break;
            case 10:st.size_set(s1);
                    cout<<"Size of Set A:";
                    cout<<j;
                    break;
            case 11:st.size_set(s2);
                    cout<<"Size of Set B:";
                    cout<<j;
                    break;
            case 12:return 0;
                    break;
            default:cout<<"Wrong choice:";
                    break;
        }
    }while(choice<13);
    return 0;
}
