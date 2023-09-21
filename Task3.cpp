//  freopen("self.in", "r", stdin);
//  freopen("corner1.txt", "w", stdout);
/* a == 97 \\ z == 122 \\ A == 65 \\ Z == 90 */
#include <iostream>
#include <stdio.h>
#include <stack>
#include <cmath>
#include<string>
#include<vector>
#include<bits/stdc++.h>
#include <numeric>
#define co continue
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define ll long long
#define el endl
#define TC int t; cin>>t; while(t--)
#define a_ban0ub_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
/*
ll binary_Search(deque<ll>arr, ll l, ll h, ll element)
{
    while (l <= h) {

        ll m = (l + h) / 2;


        if (arr[m] == element)
            return m;

        if (arr[m] > element)

            h = m - 1;

        else

            l = m + 1;

    }

    return -1;
}
//----------------------------------------------------------------------------------
  void insertion_Sort(ll arr[],ll n)
{
    ll kay,j;
    for (int i = 1; i <n ; ++i)
    {
        kay=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>kay)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=kay;
    }
}
//----------------------------------------------------------------------------------

void selection_sort(ll arr[],ll n)
{
    for (int i = 0; i < n-1; ++i)
    {
        ll m=i;
        for (int j = i+1; j <n ; ++j)
        {
            if(arr[m]>arr[j])
            {
                m=j;
            }
        }
        swap(arr[i],arr[m]);
    }
}
//----------------------------------------------------------------------------------

 void bubble_sort(ll arr[],ll n)
{
    for (int i = 0; i <n-1 ; ++i)
    {
        for (int j = 0; j < n-i-1; ++j)
        {

            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//----------------------------------------------------------------------------------

bool prime(ll x)
{
    for (ll i=2;i*i<=x;i++)
        if (x % i == 0) return 0;
    return x > 1;
}

//----------------------------------------------------------------------------------

  //  string s;
//    cin>>s;
//    for(char c:s) {
     //   int x=c-'a'+1;  // b =(98 - 'a = 97' == 1+1=2)
     //  cout<<x;
   // }

  //  a=1 , b=2 ,..., z=26

//----------------------------------------------------------------------------------

ll gcd(ll a,ll b){
    while(b!=0){
        ll temp=a;
        a=b;
        b=temp%b;
    }
    return a;
}

//----------------------------------------------------------------------------------

ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}
//----------------------------------------------------------------------------------

//    Sum_All_Between_Two_Numbers= B*(B+1)/2 - (A-1)*(A)/2;
//    Sum_All_Between_Two_Even_Numbers= B/2*(B/2+1)- (A-1)/2*((A-1)/2+1);

//----------------------------------------------------------------------------------

string alpha = "abcdefgh ijklmnopqrstuvwxyz";*/
//---------------------------------------------------------------------------------------------------------------------------------------






char ch[10]= {'1','2','3','4','5','6','7','8','9'};
void drow()
{
    cout<<"\t"<<ch[0]<<"\t|\t"<<ch[1]<<"\t|\t"<<ch[2]<<endl;
    cout<<"\t"<<"-------------------------------------"<<endl;
    cout<<"\t"<<ch[3]<<"\t|\t"<<ch[4]<<"\t|\t"<<ch[5]<<endl;
    cout<<"\t"<<"-------------------------------------"<<endl;
    cout<<"\t"<<ch[6]<<"\t|\t"<<ch[7]<<"\t|\t"<<ch[8]<<endl;
}
void drowag()
{
    ch[0]='1';
    ch[1]='2';
    ch[2]='3';
    ch[3]='4';
    ch[4]='5';
    ch[5]='6';
    ch[6]='7';
    ch[7]='8';
    ch[8]='9';

}
void fun(int n, char c)
{
    switch(n)
    {
    case 1:
        ch[0] = c;
        break;
    case 2:
        ch[1] = c;
        break;
    case 3:
        ch[2] = c;
        break;
    case 4:
        ch[3] = c;
        break;
    case 5:
        ch[4] = c;
        break;
    case 6:
        ch[5] = c;
        break;
    case 7:
        ch[6] = c;
        break;
    case 8:
        ch[7] = c;
        break;
    case 9:
        ch[8] = c;
        break;
    }

}
bool chack(int n)
{
    if(n>=1&&n<=9)
        return true;

    return false;
}
bool chack2(int n)
{
    switch(n)
    {
    case 1:
        if(ch[0] == '1')
            return true;
        break;
    case 2:
        if(ch[1] == '2')
            return true;
        break;
    case 3:
        if(ch[2] == '3')
            return true;
        break;
    case 4:
        if(ch[3] == '4')
            return true;
        break;
    case 5:
        if(ch[4] == '5')
            return true;
        break;
    case 6:
        if(ch[5] == '6')
            return true;
        break;
    case 7:
        if(ch[6] == '7')
            return true;
        break;
    case 8:
        if(ch[7] == '8')
            return true;
        break;
    case 9:
        if(ch[8] == '9')
            return true;
        break;

    }
    return false;
}
bool winx()
{
    if(ch[0]=='X'&&ch[1]=='X'&&ch[2]=='X')
    {
        return true;
    }
    else if(ch[3]=='X'&&ch[4]=='X'&&ch[5]=='X')
    {
        return true;
    }
    else if(ch[6]=='X'&&ch[7]=='X'&&ch[8]=='X')
    {
        return true;
    }
    else if(ch[0]=='X'&&ch[3]=='X'&&ch[6]=='X')
    {
        return true;
    }
    else if(ch[1]=='X'&&ch[4]=='X'&&ch[7]=='X')
    {
        return true;
    }
    else if(ch[2]=='X'&&ch[5]=='X'&&ch[8]=='X')
    {
        return true;
    }
    else if(ch[0]=='X'&&ch[4]=='X'&&ch[8]=='X')
    {
        return true;
    }
    else if(ch[2]=='X'&&ch[4]=='X'&&ch[6]=='X')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool winO()
{
    if(ch[0]=='O'&&ch[1]=='O'&&ch[2]=='O')
    {
        return true;
    }
    else if(ch[3]=='O'&&ch[4]=='O'&&ch[5]=='O')
    {
        return true;
    }
    else if(ch[6]=='O'&&ch[7]=='O'&&ch[8]=='O')
    {
        return true;
    }
    else if(ch[0]=='O'&&ch[3]=='O'&&ch[6]=='O')
    {
        return true;
    }
    else if(ch[1]=='O'&&ch[4]=='O'&&ch[7]=='O')
    {
        return true;
    }
    else if(ch[2]=='O'&&ch[5]=='O'&&ch[8]=='O')
    {
        return true;
    }
    else if(ch[0]=='O'&&ch[4]=='O'&&ch[8]=='O')
    {
        return true;
    }
    else if(ch[2]=='O'&&ch[4]=='O'&&ch[6]=='O')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    a_ban0ub_on_da_code
    int n,c=0,t=0;
    while (true)
    {
        int exitt=0;
        drow();
        cout<<"Enter The Number Move :"<<endl;
        c++;
        if(c%2==0)
        {
            cout<<"Try x"<<endl;
            cin>>n;
            while (!chack(n))
            {
                cout<<"Error Enter Number 1 to 9"<<endl;
                cin>>n;
            }
            while (!chack2(n))
            {
                cout<<"Error Enter Anther Place"<<endl;
                cin>>n;
            }
            fun(n,'X');
        }
        else
        {
            cout<<"try O"<<endl;
            cin>>n;
            while (!chack(n))
            {
                cout<<"Error Enter Number 1 to 9"<<endl;
                cin>>n;
            }
            while (!chack2(n))
            {
                cout<<"Error Enter Anther Place"<<endl;
                cin>>n;
            }
            fun(n,'O');
        }

        t++;
        if(winx())
        {
            drow();
            cout<<"\t__________ x is win __________"<<endl;
            cout<<" If you want play agin enter any number or -1 to exit"<<endl;
            cin>>exitt;
            if(exitt==-1)
            {
                return 0;
            }
            else
            {
                t=0;
                c=0;
                drowag();
            }

        }
        if(winO())
        {
            drow();
            cout<<"\t__________ O is win __________"<<endl;
            cout<<" if you want play agin enter any number or -1 to exit"<<endl;
            cin>>exitt;
            if(exitt==-1)
            {
                return 0;
            }
            else
            {
                t=0;
                c=0;
                drowag();
            }
        }

        if(t==9)
        {
            drow();
            cout<<"___no one win ___ if you want play agin enter any number or -1 to exit"<<endl;
            cin>>exitt;
            if(exitt==-1)

            {
                return 0;
            }
            else
            {
                t=0;
                c=0;
                drowag();

            }
        }
    }
    return 0;
}
