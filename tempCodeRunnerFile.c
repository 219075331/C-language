/**********************************************************************
 *                                                                    *
 *       プログラミング演習１                                         *
 *       function  : pgm6       2020/10/28                            *
 *       corrector :              /  /                                *
 *                                                                    *
 **********************************************************************/
#include   <stdio.h>

#define    NAMELNG  9 
#define    NAMECNT  7 

    static  char    meibo[NAMECNT][NAMELNG] = {
        "SAZAE   ",
        "WAKAME  ",
        "MASUO   ",
        "NORISUKE",
        "TARACHAN",
        "KATSUO  ",
        "NAMIHEI "
    };

void namesort(char *, int);
void namesort(char *psmeibo, int ikosu){   
    char *set = psmeibo;
    char *first = set;
    char *second = set+9;
    char temp;

    for(int i = 1; i <= ikosu; i++ ){
        for( int j = 0; j <= NAMELNG-1; j++){
            if (*set == ' ')
            {
                *set = '_';     
            }      
            set++;            
        }
    }

    for(int i = 1; i <= ikosu-1; i++ ){
        
        if( *first > *second ){
            for (int j = 0; j <= NAMELNG-1; j++)
            {
                temp = *first;
                *first = *second;
                *second = temp; 

                first++;
                second++;
            }                    
        }
        else
        {
            for (int j = 0; j <= NAMELNG-1; j++)
            {
                first++;
                second++;
            }
        }       
        
    }  

}

int main(void)
{
    int  i;
    char *pcw;


    (void)printf("****  Before calling namesort  ****\n");
    (void)printf("    name  \n");
    for ( i=0 ; i < NAMECNT ; i++ ) 
   {        
        (void)printf("    %-12s\n",meibo[i]); 
    }

	pcw = (char *)meibo;
    namesort( pcw, NAMECNT );          /* name-sorting function   */

    (void)printf("\n****  After calling namesort  ****\n");
    (void)printf("    name  \n");
    for ( i=0 ; i < NAMECNT ; i++ )
    {

        (void)printf("    %-12s\n",meibo[i]);
    }    
	return 0;
}
