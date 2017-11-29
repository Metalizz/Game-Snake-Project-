
#ifndef GLOBAL_H
#define GLOBAL_H

#include <ncurses.h>
#include <stdio.h>
#include <sys/stat.h>
typedef struct{

                char nom[3];
                int sec;

        }jugador;


jugador j[6];
FILE *f;


char *sino[]={
        "No",
        "Si",
        };


int fexists(const char *filename){

        struct stat buffer;
    int exist = stat(filename,&buffer);
    if(exist == 0)
        return 1;
    else
        return 0;
};

int wincomps(){

int flag=0;

 initscr();
 cbreak();
         if(has_colors()&&can_change_color()){
                        start_color();
         }else{
                        flag=1;
         }

 init_pair(1, COLOR_BLACK, COLOR_GREEN);//CONDITION MET
 init_pair(2, COLOR_WHITE, COLOR_BLACK);//NORMAL
 init_pair(3, COLOR_BLUE, COLOR_BLACK);//ACTION DESCRIBE && Desnutrias
 init_pair(4, COLOR_YELLOW, COLOR_BLACK); //WARN
 init_pair(5, COLOR_RED, COLOR_BLACK);//morbido

 refresh();
return flag;
};

void ventanas(WINDOW *in){

        int yy,xx;

        getmaxyx(stdscr,yy,xx);
        wclear(in);
        box(stdscr,'|','=');
        refresh();
        box(in,'*','*');
        mvwaddstr(in,0,14,"<GAME SNAKE LAND>");

        wrefresh(in);

  
  
  void food(){
    int head.x=25,head.y=20,length,food,head;
    
    if(head.x==food.x&&head.y==food.y)
    {
        length++;
        time_t a;
        a=time(0);
        srand(a);
        food.x=rand()%70;
        if(food.x<=10)
            food.x+=11;
        food.y=rand()%30;
        if(food.y<=10)
 
            food.y+=11;
    }
    else if(food.x==0)/*to create food for the first time coz global variable are initialized with 0*/
    {
        food.x=rand()%70;
        if(food.x<=10)
            food.x+=11;
        food.y=rand()%30;
        if(food.y<=10)
            food.y+=11;
    }
}

  
  
};


#endif
