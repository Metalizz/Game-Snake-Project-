
int main(){

        WINDOW *vent;
        int xx,yy;


        wincomps();
        getmaxyx(stdscr,yy,xx);
        vent=newwin(25,50,yy/4,xx/4);
        ventanas(vent);


        getch();

endwin();
}
