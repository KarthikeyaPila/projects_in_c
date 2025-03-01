int fibonacci(int index){
  if(index == 0){
    return 0;
  }

  if(index == 1){
    return 1;
  }
  
  int arr[] = {0, 1};
  int result = 0;

  for(int i=2; i<=index; i++){
    result = arr[0] + arr[1];
    arr[i%2] = result;
  }

  return result;
}
