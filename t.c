#include <stdio.h>

void print_at_slash(int n)
{
     char *a =
//        "On the "
	  "@n'+,#'/"
//        "first"
	  "*{}w+/"
//        "second"
	  "w#cdnr/"
//        "third"
	  "+,{}r/"
//        "fourth"
	  "*de}+,/"
//        "fifth"
	  "*{*+,/"
//        "sixth"
	  "w{%+,/"
//        "seventh"
	  "w#q#n+,/"
//        "eight"
	  "#{l+,/"
//        "ninth"
	  "n{n+,/"
//        "tenth"
	  "+#n+,/"
//        "eleventh"
	  "#;#q#n+,/"
//        "tweofth"
	  "+k#;*+,/"
//        " day of Christmas my true love gave to me\n"
	  "'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/"
//        "twelve drummers drumming, "
	  "+k#;q#'r}eKK#}w'r}eKK{nl]'/"
//        "eleven pipers piping, "
	  "#;#q#n'){)#}w'){){nl]'/"
//        "ten lords a-leaping,\n"
	  "+#n';d}rw' i;# ){nl]!/"
//        "nine ladies dancing, "
	  "n{n#'; r{#w'r nc{nl]'/"
//        "eight maids a-milking, "
	  "#{l,+'K {rw' iK{;[{nl]'/"
//        "seven swans a-swimming,\n"
	  "w#q#n'wk nw' iwk{KK{nl]!/"
//        "six g a-laying, "
	  "w{%'l' i; :{nl]'/"
//        "five gold rings;\n"
	  "*{q#'ld;r'}{nlwb!/"
//        "four calling birds, "
	  "*de}'c ;;{nl'-{}rw]'/"
//        "three french hens, "
	  "+,}##'*}#nc,',#nw]'/"
//        "two turtle doves\n and "
	  "+kd'+e}+;#'rdq#w! nr'/"
//        "a partridge in a pear tree.\n\n"
	  " ') }+}{rl#'{n' ')# }'+}##(!!/";
     while (n > 0) {
	  while(*a++ != '/');
	  n -= 1;
     }
     while (*a != '/') {
	  char *s = "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry";
	  while (*a != *s++);
	  putchar(s[30]);
	  a += 1;
     }
}

int main()
{
     for (int c = 0; c < 12; c++) {
	  print_at_slash(0);
	  print_at_slash(c + 1);
	  print_at_slash(13);
	  for (int i = 25 - c; i < 26; i++) {
	       print_at_slash(i);
	  }
     }
     return 0;
}
