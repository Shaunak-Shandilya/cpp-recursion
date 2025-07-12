//Tail Recursion
void fun1(int n){
  if (n>0){
    printf("%d",n);
    fun1(n-1);
  }
}

//Head Recursion
void fun2(int n){
  if (n>0){
    fun2(n-1);
    printf("%d",n);
  }
}

void main(){
  int x = 3;
  fun1(3); //321
  fun2(3); //123
  
}
