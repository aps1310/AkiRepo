#include<iostream>
using namespace std;
int main()
{
        int b_size,token=0,packets;
        char data;
        cout<<"\nEnter size of bucket:\t";
        cin>>b_size;
        int i=1,j;
        while(1)
        {
                cout<<"\nSecond "<<i;
                cout<<"\nData to send?(y/n):\t";
                cin>>data;
                if(data=='n')
                {
                        token+=1;
                        if(token>b_size)
                                token=b_size;

                        cout<<"\nNumber of tokens:\t"<<token;
                }
                if(data=='y')
                {
                        cout<<"\nEnter number of packets to be sent:\t";
                        cin>>packets;
                        cout<<"\nPackets sent at second "<<i++<<" : "<<token;
                        packets-=token;
                        j=1;
                        while(j<=packets)
                        {
                                cout<<"\nSending packet "<<(j+token)<<" at second "<<i++;
                                 for(int l=0;l<1000000;l++)
                                    for(int k=0;k<1000;k++)
                                        ;
                                j++;
                                if(j>packets)
                                    goto end;

                        }
                }

                i++;
        }
        end:
        return 0;
}
