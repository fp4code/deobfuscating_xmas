#include <stdio.h>

char *S1 = "@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{KK{nl]!/w{%'l' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/";
char *S2 = "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry";


void f0(char *a)
{
     while (*a != '/') {
	  char *s = S2;
	  while (*a != *s++);
	  putchar(s[30]);
	  a += 1;
     }
}

char *skip_slash(int n, char *a)
{
     while (n > 0) {
	  while(*a++ != '/');
	  n -= 1;
     }
     return a;
}

void fcommon(int t, int c, char *a)
{
     for (int i = 25 - c; i < 26; i++) {
	  f0(skip_slash(i, S1));
     }
}

void fmain(int c, char *a)
{
     f0(S1);
     f0(skip_slash(c + 1, S1));
     f0(skip_slash(13, S1));
     fcommon(0, c, a);
     if (c < 11)
	  fmain(c + 1, "%s %d %d\n");
     return;
}

int main() {
     fmain(0, "%s");
     return 0;
}
