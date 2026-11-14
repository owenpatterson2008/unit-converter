#include <stdio.h>
void PSInKPA(void);
void KPAnPSI(void);
void lbnN(void);
void Nnlb(void);
void ftnm(void);
void mnft(void);
void ftxlbnNxm(void);
void Nxmnftxlb(void);
void FnC(void);
void CnF(void);

int main(void){
    //variables
    int conversion;
    //prompt user
    printf("Choose from this menu:\n");
    printf("psi -> kPa:       1\n");
    printf("kPa -> psi:       2\n");
    printf("lbf -> N:         3\n");
    printf("N -> lbf:         4\n");
    printf("ft -> m:          5\n");
    printf("m -> ft:          6\n");
    printf("ft x lbf -> N x m:7\n");
    printf("N x m -> ft x lbf:8\n");
    printf("F -> C:           9\n");
    printf("C -> F:           10\n");
    printf("Enter 0 to quit\n");
    printf("--------------------\n");
    //loop
    while(1){
        //get input
        printf("enter your conversion: ");
        //scanf gives back 1 if it read a number, so anything else means bad input
        if(scanf("%d",&conversion)!=1){
            printf("That is not a number. Quitting.\n");
            break;
        }
        if(conversion==0){
            break;
        }
        if(conversion==1){
            PSInKPA();
        }else if(conversion==2){
            KPAnPSI();
        }else if(conversion==3){
            lbnN();
        }else if(conversion==4){
            Nnlb();
        }else if(conversion==5){
            ftnm();
        }else if(conversion==6){
            mnft();
        }else if(conversion==7){
            ftxlbnNxm();
        }else if(conversion==8){
            Nxmnftxlb();
        }else if(conversion==9){
            FnC();
        }else if(conversion==10){
            CnF();
        }else{
            printf("This is not a valid option.\n");
        }
    }
    return 0;
}
void PSInKPA(void){
    //variables
    float input,output;
    //get input
    printf("Enter your value in psi: ");
    scanf("%f",&input);
    //perform tasks
    output=input*6.89476;
    printf("value: %.3f kPa\n",output);
}
void KPAnPSI(void){
    float input,output;
    printf("Enter your value in kPa: ");
    scanf("%f",&input);
    //perform tasks
    output=input*0.145038;
    printf("value: %.3f psi\n",output);
}
void lbnN(void){
    float input,output;
    printf("Enter your value in lbf: ");
    scanf("%f",&input);
    //perform tasks
    output=input*4.44822;
    printf("value: %.3f N\n",output);
}
void Nnlb(void){
    float input,output;
    printf("Enter your value in N: ");
    scanf("%f",&input);
    //perform tasks
    output=input*0.224809;
    printf("value: %.3f lbf\n",output);
}
void ftnm(void){
    float input,output;
    printf("Enter your value in ft: ");
    scanf("%f",&input);
    //perform tasks
    output=input*0.3048;
    printf("value: %.3f m\n",output);
}
void mnft(void){
    float input,output;
    printf("Enter your value in m: ");
    scanf("%f",&input);
    //perform tasks
    output=input*3.28084;
    printf("value: %.3f ft\n",output);
}
void ftxlbnNxm(void){
    float input,output;
    printf("Enter your value in ft x lbf: ");
    scanf("%f",&input);
    //perform tasks (1 ft x lbf = 1.35582 N x m)
    output=input*1.35581795;
    printf("value: %.3f N x m\n",output);
}
void Nxmnftxlb(void){
    float input,output;
    printf("Enter your value in N x m: ");
    scanf("%f",&input);
    //perform tasks (1 N x m = 0.737562 ft x lbf)
    output=input*0.737562149;
    printf("value: %.3f ft x lbf\n",output);
}
void FnC(void){
    float input,output;
    printf("Enter your value in degrees F: ");
    scanf("%f",&input);
    //perform tasks: C = (F - 32) x 5/9
    output=input-32.0;
    output=output*5.0/9.0;
    printf("value: %.3f degrees C\n",output);
}
void CnF(void){
    float input,output;
    printf("Enter your value in degrees C: ");
    scanf("%f",&input);
    //perform tasks: F = C x 9/5 + 32
    output=input*9.0/5.0;
    output=output+32.0;
    printf("value: %.3f degrees F\n",output);
}
