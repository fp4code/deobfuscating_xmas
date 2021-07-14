#include <stdio.h>

char *S1 = "@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{KK{nl]!/w{%'l' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/";
char *S2 = "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry";

int f(int t, int c, char *a)
{
     if (t < -72)
	  return f(c, t, S1);
     if (t < -50) {
	  if (c == *a)
	       return putchar(32[a-1]);
	  return f(-65, c, a+1);
     }
     if (t < 0)
	  return f((*a == '/') + t, c, a + 1);
     if (t == 0)
	  return (*a == '/' || f(0,
				 f(-61, *a, S2),
				 a+1));
     if (t < 3) {
	  f(0, -86, S1);
	  f(1 - c, -87, S1);
	  f(-13, -79, S1);
     }
     if (t < c)
	  f(t + 1, c, a);
     if (f(-94, -27 + t, a) == 0)
	  return 16;
     if (t != 2)
	  return 16;
     if (c > 12)
	  return 9;
     return f(2, c+1, "%s %d %d\n");
}

int main() {
     return f(2, 2, "%s");
}
