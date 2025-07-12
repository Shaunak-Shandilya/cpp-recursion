int fun1(int n){
  if(n>0){
    return fun1(n-1)+n;
  }
  return 0;
}

int fun2(int n){
  static int y = 0;
  if(y>0){
    y++;
    return fun2(y-1)+y;
  }
  return 0;
}

int main(){
  int a = 5;
  printf("%d\n",fun1(a));
  printf("%d\n",fun2(a));
}
