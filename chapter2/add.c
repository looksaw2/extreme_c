int add(int x , int y){
    return x + y;
}

int sum(int *num ,int count){
    int sum = 0;
    for (int i  = 0; i < count; i++){
        sum += num[i];
    }
    return sum;
}