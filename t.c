#include <stdio.h>

void print_at_slash(int n)
{
     char *text =
	  "@n'+,#'/"
//  0     "On the /"
	  "*{}w+/"
//  1     "first/"
	  "w#cdnr/"
//  2     "second/"
	  "+,{}r/"
//  3     "third/"
	  "*de}+,/"
//  4     "fourth/"
	  "*{*+,/"
//  5     "fifth/"
	  "w{%+,/"
//  6     "sixth/"
	  "w#q#n+,/"
//  7     "seventh/"
	  "#{l+,/"
//  8     "eight/"
	  "n{n+,/"
//  9     "ninth/"
	  "+#n+,/"
// 10     "tenth/"
	  "#;#q#n+,/"
// 11     "eleventh/"
	  "+k#;*+,/"
// 12     "tweofth/"
	  "'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/"
// 13     " day of Christmas my true love gave to me\n/"
	  "+k#;q#'r}eKK#}w'r}eKK{nl]'/"
// 14 11  "twelve drummers drumming, /"
	  "#;#q#n'){)#}w'){){nl]'/"
// 15 10  "eleven pipers piping, /"
	  "+#n';d}rw' i;# ){nl]!/"
// 16  9  "ten lords a-leaping,\n/"
	  "n{n#'; r{#w'r nc{nl]'/"
// 17  8  "nine ladies dancing, /"
	  "#{l,+'K {rw' iK{;[{nl]'/"
// 18  7  "eight maids a-milking, /"
	  "w#q#n'wk nw' iwk{KK{nl]!/"
// 19  6  "seven swans a-swimming,\n/"
	  "w{%'l' i; :{nl]'/"
// 20  5  "six g a-laying, /"
	  "*{q#'ld;r'}{nlwb!/"
// 21  4  "five gold rings;\n/"
	  "*de}'c ;;{nl'-{}rw]'/"
// 22  3  "four calling birds, /"
	  "+,}##'*}#nc,',#nw]'/"
// 23  2  "three french hens, /"
	  "+kd'+e}+;#'rdq#w! nr'/"
// 24  1  "two turtle doves\n and /"
	  " ') }+}{rl#'{n' ')# }'+}##(!!/";
// 25  0  "a partridge in a pear tree.\n\n/"
     while (n > 0) {
	  while(*text++ != '/');
	  n -= 1;
     }
     while (*text != '/') {
	  char *code = "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:"
	              "\nuwloca-O;m .vpbks,fxntdCeghiry";
	  while (*text != *code++);
	  putchar(*(code + 30));
	  text += 1;
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
