
#if FUNCIONC_H
#define FUNCIONC_H




int llaves(){

        do{

                for(int x=0;x<3;x++){

                if(x==hl)
                        wattron(m,A_REVERSE);

                        //imprime el ccursor en posicion algp;
                        wattroff(m,A_REVERSE);
                }

                wrefresh(m);
                c=wgetch(in);
                switch(c){
                        case KEY_UP:
                                        if(ys>0)
                                                ys--;
                                        else
                                                //ys=limite inferior;
                                break;
                                case KEY_DOWN:
                                        if(ys<//limite inferior)
                                                ys++;
                                        else
                                                ys=0;
                                break;




                        case KEY_LEFT:
if(xs>)
break;
case KEY_RIGHT:

break;


                        default:
                                        wattron(in,COLOR_PAIR(4));
                                        mvwprintw(in,1,1,"  [!] Presione Flechas o [ENTER]");
                                        wattroff(in,COLOR_PAIR(4));                                     }
        }while(c!=10):



}
#endif
