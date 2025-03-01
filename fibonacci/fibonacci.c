int fibonacci(int index){
  if(index == 0) {
    return 1;
  }

  if(index == 1) {
    return 1;
  }

  if(index > 1){
    return fibonacci(index - 1) + fibonacci(index - 2);
  }

  else return 0;
}
