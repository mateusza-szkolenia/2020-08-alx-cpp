#include <stdio.h>
#define w_ while
#define f_ for
#define t_ typedef
                                   t_
                                 int i_
                               ;t_ char _
                             ;t_  float fl;
                           i_ (*p)(i_); i_ B[
                         21][80];i_ i,i2,i3;_ S
                       []="$Jocgl&b~mch$Fi|aci&"\
                     "Jeti`~chme*&$$&&$$&&Smaohml"\
                   "h}$qoag|iv$&&$$&&$$&&$$&o$ggj}$"\
                 "His}&4456&Vkm&$$&&$$&&$$svh}hg$Go&s"\
               "$u|g~cugms*$$&&$$&te`iugm*&~`tisms&m$uv"\
             "koilq*&&$$&&$$&&$$&&$$&&$$&&$$&&$$&&$$&&$$&"\
           "&$$&&$$&&$$&&$$&Kepcsw~&&"/**/"$$&&$$&&$$&&$$&&"\
         "$$&&$";_* s;b(y,x,c){x>=0&&x<80&&y>=0&&y<21?B[y][x]=(
      c>=' '&&c<='~'?c:' '):0;}zz(){i=i2=i3=0x2fffff;w_(i-->0)w_(
    i2-->0)w_(i3-->0)b(0,0,0);}d_a(x,y){b(y,++x+1,'_');b(y+2,++x,95
  );b(++y,x--,111);b(y++,x,92);b(y--,x--,'/');b(y,x++,'(');b(y++,x+=3
,')');b(y--,--x,92);b(y,x,'/');}decr(){f_(i=0;i<('x'+'y');i++)S[i]^=4^(
                (i>>1)%2<<1);}cs(){f_(i2=0;i2<21; i2++)
              f_(i=0;i<80;i++)b(i2,i,32);}ps(){f_(i2=0;i2
            <21;i2++){f_(i=0;i<80;i++)p(B[i2 ][i]);p(10);}}
          #define r return /*License:GNU/GPL;Copyleft2009***/
        d_r(x,y,n,w){b(y,x+=4,'.');b(y,x+w+2,'_');b(y,x+w+3,'.'
      );b(y++,++x,'_');b(y,x-2,'/');b(y,x+w+1,'/');b(y,x+w+2,'_')
    ;b(y--,x+w+3,')');f_(i=0;i<=n;i++){b(y+2+i,x-3,'|');b(y+2+i,x+w
  ,'|');}x++;f_(i=0;i<w;i++){b(y,x+i,'_');b(y+n+2,x-2+i,'_');b(y+n+3,
x-4+i,'_');}f_(i=0;i<n;i++){f_(i2=0;i2<w-2;i2++){b(y+i+2,x+i2-1,*s++);}
                }b(y+=n+2,x-=5,'_');b(y,x+=2,'_');b(++y
              ,x-=3,'(');b(y,++x,'_');x+=w+1;b(y,x++,'_')
            ;b(y,x++,'(');b(y,x,'/');}/*:-)*/fl si(fl x){fl
          pi=355.0/113.0;w_(x<-pi)x+=pi+pi;w_(x>pi)x-=pi+pi;fl
        y=1.0;f_(i=9;i>1;i-=2)y=1.0-x*x*y/(i*i-i);r x*y;}main()
      {p=putchar;cs();decr();i_ j;f_(j=0;j<230;j++){printf(/*:-)*/
    "\e[H\e[J");s=S;cs();j<40?d_a(j-3,4+(i_)(2*si(0.5*j))):0;j>=40&&
  j<60?d_a(37,4+(i_)(2*si(0.5*j))):0;j>=60&&j<100?d_a(j-23,4+(i_)(2*si
(0.5*j))):0;j>=110&&j<150?(d_r(195-j,3+(i_)(2*si(0.5*j)),0,34),d_a(190-j
                    ,3+(i_)(2*si(0.5*j))),d_a(200-j,
                    7+(i_)(2*si(0.5*j+1))),d_a(215-j
                    ,13+(i_)(2*si(0.4*j+1)))):0 ;j>=
                    150&&j<166?(d_r(35,3,(j-150) /3,
                    34),d_a(40,3+(i_)(2*si(0.5*j))),
                    d_a(50,7+(i_)(2*si(0.5*j+1))),d_a
                    (65,13+(i_)(2*si(0.4*j+1)))):0;j
                    >166?(d_r(35,3,7,34),d_a(206-j,3
                    +(i_)(2*si(0.5*j))),d_a(216-j,7+
                    (i_)(2*si(0.5*j+1))),d_a(231-j,13
                    +(i_)(2*si(0.4*j+1)))):/***/0;ps
                    ();zz();}}/* Mateusz Adamowski*/

