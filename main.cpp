#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int coun=1, m=1, v1=1, v2=3, v3=5, v4=7, a=58, av, vi, vil;
bool laimi=false;
vector <char> vecr {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
vector <int> vec;

void lenta()
{
    cout<<"  ";
    for(int i=0; i<8; i++)
    {
        cout<<vecr[i]<<" ";
    }
    for(int i=0; i<63; i++)
    {
        if((vec[i])%8==0)
        {
            cout<<endl;
            cout<<coun<<" ";
            coun++;
        }
        if(vec[i]==v1)
        {
            cout<<"V1";

        }
        else if(vec[i]==v2)
        {
            cout<<"V2";

        }
        else if(vec[i]==v3)
        {
            cout<<"V3";

        }
        else if(vec[i]==v4)
        {
            cout<<"V4";

        }
        else if(vec[i]==a)
        {
            cout<<"A ";
        }
        else cout<<"| ";

    }
    cout<<"| ";
    cout<<endl;
    m=1;
    coun=1;
}

void avis()
{
    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {
            if(a+7==v1 || a+7==v2 || a+7==v3 ||a+7==v4)
            {
                cout<<"avies ejimas"<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
                cin>>av;
                if (av==a+9)
                {
                    a=a+9;
                }
                else
                {
                    cout<<"negalimas";
                    cout<<endl;
                    avis();
                }
                return;
            }
        }
    }
    if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {
            if(a+7==v1 || a+7==v2 || a+7==v3 ||a+7==v4)
            {
                cout<<"avies ejimas"<<endl<<"rasyk "<<a-9<<" jei nori judeti i desine apacion "<<endl;
                cin>>av;
                if (av==a-9)
                {
                    a=a-9;
                }
                else
                {
                    cout<<"negalimas";
                    cout<<endl;
                    avis();
                }
                return;
            }
        }
    }
    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
    {
        if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
        {
            if(a+7==v1 || a+7==v2 || a+7==v3 ||a+7==v4)
            {
                cout<<"avies ejimas"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine apacion "<<endl;
                cin>>av;
                if (av==a-7)
                {
                    a=a-7;
                }
                else
                {
                    cout<<"negalimas ";
                    cout<<endl;
                    avis();
                }
                return;
            }
        }
    }
    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {
            if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
            {
                cout<<"avies ejimas"<<endl<<"rasyk "<<a+7<<" jei nori judeti i desine apacion "<<endl;
                cin>>av;
                if (av==a+7)
                {
                    a=a+7;
                }
                else
                {
                    cout<<"negalimas ";
                    cout<<endl;
                    avis();
                }
                return;
            }
        }
    }

    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {
            cout<<"avies ejimas"<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
            cin>>av;
            if (av==a+9)
            {
                a=a+9;
            }
            else if(av==a+7)
            {
                a=a+7;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4 )
    {
        if( a+7==v1 || a+7==v2 || a+7==v3 ||a+7==v4)
        {
            cout<<"avies ejimas"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
            cin>>av;
            if (av==a+9)
            {
                a=a+9;
            }
            else if(av==a-7)
            {
                a=a-7;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
    {
        if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
        {
            cout<<"avies ejimas"<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl;
            cin>>av;
            if (av==a-7)
            {
                a=a-7;
            }
            else if(av==a+7)
            {
                a=a+7;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {
            cout<<"avies ejimas"<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl;
            cin>>av;
            if (av==a-9)
            {
                a=a-9;
            }
            else if(av==a+7)
            {
                a=a+7;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a+7==v1 || a+7==v2 || a+7==v3 || a+7==v4)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {
            cout<<"avies ejimas"<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
            cin>>av;
            if (av==a-9)
            {
                a=a-9;
            }
            else if(av==a+9)
            {
                a=a+9;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a+7==v1 || a+7==v2 || a+7==v3 || a+7==v4)
    {
        if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
        {
            cout<<"avies ejimas"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl;
            cin>>av;
            if (av==a-9)
            {
                a=a-9;
            }
            else if(av==a-7)
            {
                a=a-7;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                avis();
            }
            return;
        }
    }


    if(a>55)
    {
        if(a-9==v1 || a-9==v2 || a-9==v3 || a-9==v4)
        {
            cout<<"avies ejimas: "<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun ";
            cin>>av;
            if(av==a-7)
            {
                a=a-7;
            }
            else
            {
                cout<<"negalimas";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a>55)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {

            cout<<"avies ejimas: "<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun ";
            cin>>av;
            if(av==a-9)
            {
                a=a-9;
            }
            else
            {
                cout<<"negalimas";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a&8==0)
    {
        if(a+9==v1 || a+9==v2 || a+9==v3 || a+9==v4)
        {
            cout<<"avies ejimas: "<<endl<<"rasyk "<<a-7<<" jei nori judeti i kaire apacion ";
            cin>>av;
            if(av==a-7)
            {
                a=a-7;
            }
            else
            {
                cout<<"negalimas";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a%8==0)
    {
        if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
        {

            cout<<"avies ejimas: "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine virsun ";
            cin>>av;
            if(av==a+9)
            {
                a=a+9;
            }
            else
            {
                cout<<"negalimas";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if((a-7)%8==0)
    {
        if(a+7==v1 || a+7==v2 || a+7==v3 ||a+7==v4)
        {

            cout<<"avies ejimas: "<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun ";
            cin>>av;
            if(av==a-9)
            {
                a=a-9;
            }
            else
            {
                cout<<"negalimas";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if((a-7)%8==0)
    {
        if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
        {

            cout<<"avies ejimas: "<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion ";
            cin>>av;
            if(av==a+7)
            {
                a=a+7;
            }
            else
            {
                cout<<"negalimas";
                cout<<endl;
                avis();
            }
            return;
        }
    }
    if(a-9==v1 || a-9==v2 || a-9==v3 ||a-9==v4)
    {
        cout<<"avies ejimas"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
        cin>>av;
        if(av==a-7)
        {
            a=a-7;
        }
        else if (av==a+9)
        {
            a=a+9;
        }
        else if(av==a+7)
        {
            a=a+7;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
        return;
    }
    if(a-7==v1 || a-7==v2 || a-7==v3 ||a-7==v4)
    {
        cout<<"avies ejimas"<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
        cin>>av;
        if(av==a-9)
        {
            a=a-9;
        }
        else if (av==a+9)
        {
            a=a+9;
        }
        else if(av==a+7)
        {
            a=a+7;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
        return;
    }
    if(a+9==v1 || a+9==v2 || a+9==v3 ||a+9==v4)
    {
        cout<<"avies ejimas"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl;
        cin>>av;
        if(av==a-7)
        {
            a=a-7;
        }
        else if (av==a-9)
        {
            a=a-9;
        }
        else if(av==a+7)
        {
            a=a+7;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
        return;
    }
    if(a+7==v1 || a+7==v2 || a+7==v3 ||a+7==v4)
    {
        cout<<"avies ejimas"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
        cin>>av;
        if(av==a-7)
        {
            a=a-7;
        }
        else if (av==a+9)
        {
            a=a+9;
        }
        else if(av==a-9)
        {
            a=a-9;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
        return;
    }



    if(a>55)
    {
        cout<<"avies ejimas:"<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun ";
        cin>>av;
        if(av==a-9)
        {
            a=a-9;
        }
        else if (av==a-7)
        {
            a=a-7;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
    }
    else if(a%8==0)
    {
        cout<<"avies ejimas:"<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun"<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion ";
        cin>>av;
        if(av==a-7)
        {
            a=a-7;
        }
        else if (av==a+9)
        {
            a=a+9;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
    }
    else if((a-7)%8==0)
    {
        cout<<"avies ejimas:"<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun"<<endl<<"rasyk "<<a+7<<" jei nori judeti i desine apacion ";
        cin>>av;
        if(av==a-9)
        {
            a=a-9;
        }
        else if (av==a+7)
        {
            a=a+7;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
    }
    else
    {
        cout<<"avies ejimas"<<endl<<"rasyk "<<a-9<<" jei nori judeti i kaire virsun "<<endl<<"rasyk "<<a-7<<" jei nori judeti i desine virsun "<<endl<<"rasyk "<<a+7<<" jei nori judeti i kaire apacion "<<endl<<"rasyk "<<a+9<<" jei nori judeti i desine apacion "<<endl;
        cin>>av;
        if(av==a-7)
        {
            a=a-7;
        }
        else if (av==a+9)
        {
            a=a+9;
        }
        else if(av==a+7)
        {
            a=a+7;
        }
        else if (av==a-9)
        {
            a=a-9;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            avis();
        }
        return;
    }
}

void vilkas()
{
    cout<<"rinkis su kuriuo vilku judesi: 1, 2, 3, 4. Rasyk tik skaiciu ";
    cin>>vi;

    if(vi==1)
    {
        if(v1>55)
        {
            cout<<"negalimas"<<endl;
            vilkas();
        }
        if((v1-7)%8==0)
        {
            if(v1+7==a || v1+7==v2 || v1+7==v3 || v1+7==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v1%8==0)
        {
            if(v1+9==a || v1+9==v2 || v1+9==v3 || v1+9==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v1+7==a || v1+7==v2 || v1+7==v3 || v1+7==v4)
        {
            if(v1+9==a || v1+9==v2 || v1+9==v3 || v1+9==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v1+7==a || v1+7==v2 || v1+7==v3 || v1+7==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v1+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil==v1+9)
            {
                v1=v1+9;
                return;
            }
            vilkas();
        }
        if(v1+9==a || v1+9==v2 || v1+9==v3 || v1+9==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v1+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil==v1+7)
            {
                v1=v1+7;
                return;
            }
            vilkas();
        }

        if(v1%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v1+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil==v1+9)
            {
                v1=v1+9;
                return;
            }
            vilkas();
        }
        else if((v1-7)%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v1+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil==v1+7)
            {
                v1=v1+7;
                return;
            }
            vilkas();
        }
        else cout<<"vilko ejimas:"<<endl<<"rasyk ";
        cout<<v1+9<<" jei nori judeti i desine apacion "<< endl<<"rasyk "<<v1+7<<" jei nori judeti i kaire apacion "<<endl;
        cin>>vil;
        if(vil==v1+9)
        {
            v1=v1+9;
            return;
        }
        else if(vil==v1+7)
        {
            v1=v1+7;
            return;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            vilkas();
        }
    }
    if(vi==2)
    {
        if(v2>55)
        {
            cout<<"negalimas"<<endl;
            vilkas();
        }
        if((v2-7)%8==0)
        {
            if(v2+7==a || v2+7==v1 || v2+7==v3 || v2+7==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v2%8==0)
        {
            if(v2+9==a || v2+9==v1 || v2+9==v3 || v2+9==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v2+7==a || v2+7==v1 || v2+7==v3 || v2+7==v4)
        {
            if(v2+9==a || v2+9==v1 || v2+9==v3 || v2+9==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v2+7==a || v2+7==v1 || v2+7==v3 || v2+7==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v2+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil==v2+9)
            {
                v2=v2+9;
                return;
            }
            vilkas();
        }
        if(v2+9==a || v2+9==v1 || v2+9==v3 || v2+9==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v2+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil==v2+7)
            {
                v2=v2+7;
                return;
            }
            vilkas();
        }
        if(v2%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v2+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil=v2+9)
            {
                v2=v2+9;
                return;
            }
            vilkas();
        }
        else if((v2-7)%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v2+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil=v2+7)
            {
                v2=v2+7;
                return;
            }
            vilkas();
        }
        else
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
        cout<<v2+9<<" jei nori judeti i desine apacion "<< endl<<"rasyk "<<v2+7<<" jei nori judeti i kaire apacion "<<endl;
        cin>>vil;
        if(vil==v2+9)
        {
            v2=v2+9;
            return;
        }
        else if(vil==v2+7)
        {
            v2=v2+7;
            return;
        }
        else
        {
            cout<<"negalimas ";
            cout<<endl;
            vilkas();
        }
    }
    if(vi==3)
    {
        if(v3>55)
        {
            cout<<"negalimas"<<endl;
            vilkas();
        }
        if((v3-7)%8==0)
        {
            if(v3+7==a || v3+7==v1 || v3+7==v2 || v3+7==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v3%8==0)
        {
            if(v3+9==a || v3+9==v1 || v3+9==v2 || v3+9==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v3+7==a || v3+7==v1 || v3+7==v2 || v3+7==v4)
        {
            if(v3+9==a || v3+9==v1 || v3+9==v2 || v3+9==v4)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v3+7==a || v3+7==v1 || v3+7==v2 || v3+7==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v3+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil==v3+9)
            {
                v3=v3+9;
                return;
            }
            vilkas();
        }
        if(v3+9==a || v3+9==v1 || v3+9==v2 || v3+9==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v3+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil==v3+7)
            {
                v3=v3+7;
                return;
            }
            vilkas();
        }

        if(v3%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v3+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil=v3+9)
            {
                v3=v3+9;
                return;
            }
            vilkas();
        }
        else if((v3-7)%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v3+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil=v3+7)
            {
                v3=v3+7;
                return;
            }
            vilkas();
        }
        else
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v3+9<<" jei nori judeti i desine apacion "<< endl<<"rasyk "<<v3+7<<" jei nori judeti i kaire apacion "<<endl;
            cin>>vil;
            if(vil==v3+9)
            {
                v3=v3+9;
                return;
            }
            else if(vil==v3+7)
            {
                v3=v3+7;
                return;
            }
            else
            {
                cout<<"negalimas ";
                cout<<endl;
                vilkas();
            }
        }
    }
    if(vi==4)
    {
        if(v4>55)
        {
            cout<<"negalimas"<<endl;
            vilkas();
        }
        if((v4-7)%8==0)
        {
            if(v4+7==a || v4+7==v1 || v4+7==v2 || v4+7==v3)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v1%8==0)
        {
            if(v4+9==a || v4+9==v1 || v4+9==v2 || v4+9==v3)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v4+7==a || v4+7==v1 || v4+7==v2 || v4+7==v3)
        {
            if(v4+9==a || v4+9==v1 || v4+9==v2 || v4+9==v3)
            {
                cout<<"negalimas"<<endl;
                vilkas();
            }
        }
        if(v4+7==a || v4+7==v1 || v4+7==v2 || v4+7==v3)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v4+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil==v4+9)
            {
                v4=v4+9;
                return;
            }
            vilkas();
        }
        if(v4+9==a || v4+9==v1 || v4+9==v3 || v4+9==v4)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v4+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil==v4+7)
            {
                v4=v4+7;
                return;
            }
            vilkas();
        }
        if(v4%8==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v4+9<<" jei nori judeti i desine apacion ";
            cin>>vil;
            if(vil==v4+9)
            {
                v4=v4+9;
                return;
            }
            vilkas();
        }
        else if((v4-7)%8==0 || v4-7==0)
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v4+7<<" jei nori judeti i kaire apacion ";
            cin>>vil;
            if(vil==v4+7)
            {
                v4=v4+7;
                return;
            }
            vilkas();
        }
        else
        {
            cout<<"vilko ejimas:"<<endl<<"rasyk ";
            cout<<v4+9<<" jei nori judeti i desine apacion "<< endl<<"rasyk "<<v4+7<<" jei nori judeti i kaire apacion"<<endl;
            {
                cin>>vil;
                if(vil==v4+9)
                {
                    v4=v4+9;
                    return;
                }
                else if(vil==v4+7)
                {
                    v4=v4+7;
                    return;
                }

                else
                {
                    cout<<"negalimas ";
                    cout<<endl;
                    vilkas();
                }
            }
        }
    }
    if(vi!=1 || vi!=2 || vi!=3 || vi!=4)
    {
        cout<<"negalimas"<<endl;
        vilkas();
    }
}
void avislaimi()
{
    if(a<8)
    {
        laimi=true;
        cout<<"avis laimejo";
    }
}

void vilkaslaimi()
{
    if (a==56)
    {
        if (a-7==v1 || a-7==v2 || a-7==v3 || a-7==v4)
        {
            laimi=true;
            cout<<"vilkas laimi";
            return;
        }
    }
    if(a%8==0)
    {
        if(a+9==v1 || a+9==v2 || a+9==v3 || a+9==v4)
        {
            if(a-7==v1 || a-7==v2 || a-7==v3 || a-7==v4)
            {
                laimi=true;
                cout<<"vilkas laimi";
                return;
            }
        }
    }
    if((a-7)%8==0)
    {
        if(a-9==v1 || a-9==v2 || a-9==v3 || a-9==v4)
        {
            if(a+7==v1 || a+7==v2 || a+7==v3 || a+7==v4)
            {
                laimi=true;
                cout<<"vilkas laimi";
                return;
            }
        }
    }
    if(a-9==v1 || a-9==v2 || a-9==v3 || a-9==v4){
        if(a-7==v1 || a-7==v2 || a-7==v3 || a-7==v4){
                if(a+7==v1 || a+7==v2 || a+7==v3 || a+7==v4){
                        if(a+9==v1 || a+9==v2 || a+9==v3 || a+9==v4){
        laimi=true;
        cout<<"vilkas laimi";
        return;
    }
    }
    }
}
}
int main()
{
    cout<<"zaidimo taisykles :"<<endl<<"zaidzia du zaidejai, vienas uz vilkus ir kitas uz avi"<<endl<<"tiek vilkai, tiek avis juda istrizai"<<endl<<"vilkai ir avis negali kirsti vieni kitu"<<endl<<"avies tikslas yra praeiti pro vilkus i virsutine eilute"<<endl<<"vilku tikslas uzspausti avi, kad ji neturetu jokiu ejimu"<<endl;
    for(int i=0; i<64; i++)
    {
        vec.push_back(i);

    }

    for (int i=0; i<500; i++)
    {
        lenta();
        vilkaslaimi();
        if (laimi==true)
        {
            return 0;
        }
        avis();
        system("cls");
        lenta();
        avislaimi();
        if (laimi==true)
        {
            return 0;
        }
        vilkas();
        system("cls");
    }
    return 0;
}
