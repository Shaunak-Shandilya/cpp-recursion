//tree recursion
int func1(int n){
  if (n>0){
    printf("%i",n);
    func1(n);
    func1(n);
  }
  return 0;
}

//indirect recurison
int func2(int n){
  if (n>0){
    printf("%i",n);
    func3(n);
  }
  return 0;
}
int func3(int n){
  if(n>0){
    printf("%d",n);
    func2(n);
  }
  return 0;
}

//nested recursion
int func4(int n){
  if(n>0){
    func2(func3(5));
  }
  return 0;
}  
