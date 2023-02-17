
#include<stdio.h>
#include<stdlib.h>

struct batsman      //decalre variables for batsman
 {
   char name[25];
   int runs,score,balls,toruns,total,max_run;     
   float str;

 }pl1[100],pl3;

struct bowler    //declare variables for bowler
 {
   char name[25];
   int runsgv,wkttkn,overs;
   int max_w;
   float econ;
 }pl2[100l],pl4;
 
 
 int main()
{
 int plno,choice;
  int i,n,m;
  printf("Enter the Batsman detail:\n");
  
  printf("_______________________________");
  
  printf("\n Enter the number of batsman:");
  scanf("%d",&m);
  for(i=0;i<m;i++)
   {

       printf("\n Enter name of batsman%d:",i+1);
       scanf("%s",pl1[i].name);


       printf("\n Enter the total run of batsman%d:",i+1);
       scanf("%d",&pl1[i].total);

       printf("\n Enter the balls played by the batsman%d:",i+1);
         scanf("%d",&pl1[i].balls);
   }
   
    printf("___________________________________________");
   
    printf("\n Enter the bowlers details:\n");
    
    printf("___________________________________________");
   

   printf("\n Enter the number of bowlers:");

   scanf("%d",&n);


   for(i=0;i<n;i++)
   {

       printf("\n Enter name of bowler%d:",i+1);
       scanf("%s",pl2[i].name);


       printf("\n Enter the runs given by the bowler%d: ",i+1);
       scanf("%d",&pl2[i].runsgv);


       printf("\n Enter the overs bowled by the bowler%d:",i+1);
       scanf("%d",&pl2[i].overs);


       printf("\n Enter the wickets taken by the bowler%d:",i+1);
       scanf("%d",&pl2[i].wkttkn);

    }
     printf("\n Thank you all details are recorded\n");
     
     
     printf("___________________________________________");
     
       do
    {

       printf("\n Enter the choice:\n 1)Batsman detail:\n 2)Bowlers detail:\n 3)Match summary:\n 4)Record:\n 5)Exit\n ");
       scanf("%d",&choice);

     switch(choice)
      {

        case 1:
              printf("\n Enter the batsman number to see his details");
              scanf("%d",&plno);

              plno--;
              printf("                       Player Detail\n");
              printf("===========================================================================\n");
              printf(" Batsman        runs           balls            sr   \n");
              printf("===========================================================================\n");


              pl1[plno].runs=pl1[plno].total;
              pl1[plno].str=(pl1[plno].runs*100.00)/pl1[plno].balls;
              printf(" %-15s %-14d %-13d %-9.2f\n\n",pl1[plno].name,pl1[plno].runs,pl1[plno].balls,pl1[plno].str);
              
              
               printf("___________________________________________");

              break;


        case 2:
             printf("\n Enter the bowlers number to see his details");
             scanf("%d",&plno);

             plno--;
              printf("                         Player Detail\n  ");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               //for(i=0;i<n;i++)
               {   pl2[plno].econ=pl2[plno].runsgv/pl2[plno].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n",pl2[plno].name,pl2[plno].overs,pl2[plno].runsgv,pl2[plno].wkttkn,pl2[plno].econ);
               }
               
               
                printf("___________________________________________");

             break;

        case 3:
              printf("                     Match summary\n");
              printf("==========================================================================\n");
              printf(" Batsman        runs           balls             sr   \n");
              printf("==========================================================================\n");

              for(i=0;i<n;i++)
                {
                    pl1[i].runs=pl1[i].total;
                    pl3.toruns+=pl1[i].runs;
                    pl1[i].str=(pl1[i].runs*100.00)/pl1[i].balls;
                    printf(" %-15s %-14d %-13d %-9.2f\n\n",pl1[i].name,pl1[i].runs,pl1[i].balls,pl1[i].str);
                }
                printf("TOTAL RUNS:%d\n\n",pl3.toruns);
              printf("\n\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   pl2[i].econ=pl2[i].runsgv/pl2[i].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n",pl2[i].name,pl2[i].overs,pl2[i].runsgv,pl2[i].wkttkn,pl2[i].econ);
               }

            printf("___________________________________________");
            
               break;

        case 4: pl3.max_run=0,pl4.max_w =0;
       
                for(i=0;i<m;i++)
                  { 
                     pl1[i].runs=pl1[i].total;
                     
                     if(pl3.max_run<pl1[i].runs)
                        {
                          pl3.max_run=pl1[i].runs;

                        }
 
                     if(pl4.max_w<pl2[i].wkttkn)
                      {
                      pl4.max_w=pl2[i].wkttkn;
                      }
                  }
              printf("Highest runs scored by the batsman:%d\n",pl3.max_run);
   
 
             printf("Maximum wickets taken by the bowler:%d\n",pl4.max_w);

             break;

                   printf("___________________________________________");

        case 5:
            exit(1);

        default:
             printf("\n Enter the correct choice\n");
             break;

      }

    }while(choice!=5);


   return 0;

}


