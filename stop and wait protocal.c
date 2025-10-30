// Online C compiler to run C program online
#include <stdio.h>


int main() {
    int total,ack,recv,frame=0;
    printf("Enter the total no of frames:");
    scanf("%d",&total);
    while(frame<total)
    {
        printf("Sender:sending Frame %d\n",frame);
        printf("reciever:reciever frame number is (-1 is lost):");
        scanf("%d",&recv);
        
        if(recv==frame)
        {
            printf("Reciever:Frame %d is recieved .sent Ack %d\n",recv,recv);
            ack=recv;
        }
        else{
            printf("Reciever:frame is lost .No Ack sent\n");
            ack=-1;
        }
        if(ack==frame)
        {
            printf("Sender: frame %d recieved .Next frame\n\n",ack);
            frame++;
        }
        else
        {
            printf("Sender : NO ack.Retransmitted the frame%d..\n\n",frame);
        }
    }
    printf("ALL frames sent and ack");

    return 0;
}
