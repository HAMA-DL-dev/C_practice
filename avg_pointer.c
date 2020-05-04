#include <stdio.h>

void CalAvg(int arr[][3][4],double avg[][3]);
void CompAvg(double avg[][3]);


int main(void){
  int arr[4][3][4]={
      {{42,74,82,73}, {82,61,92,100}, {70,75,55,48}},
      {{82,98,63,65}, {50,46,51,82}, {56,58,97,83}},
      {{46,44,95,80}, {52,49,51,97}, {71,91,73,90}},
      {{70,81,86,57}, {94,67,48,61}, {97,96,62,64}},
      };

  double avg[4][3]={0};

  CalAvg(arr,avg);

    for(int i=0;i<4;i++){
      printf("the average of class %d (kor,eng,math): %.2f %.2f %.2f\n",i+1,avg[i][0],avg[i][1],avg[i][2]);
    }
  CompAvg(avg);
    return 0;
}


void CalAvg(int arr[][3][4],double avg[][3]){
  //각 반의 과목별 평균을 구하여 2차원 배열에 저장
  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      for(int k=0; k<4; k++){
       
        avg[i][j] += arr[i][j][k];
      }
        avg[i][j] /= 4;
    }
  }
}

void CompAvg(double avg[][3]){ 
//과목별로 가장 높은 평균의 반을 출력

// 국어 최고 점수 출력
double max_k=0;
int j;
for(int i=0;i<4;i++){
    if(max_k<=avg[i][0]){
        max_k=avg[i][0];
        j=i;
    }
}
printf("the class get max avg of kor: %d(%.2f)\n",j+1,max_k);

// 영어 최고 점수 출력

double max_e=0;
for(int i=0;i<4;i++){
    if(max_e<=avg[i][1]){
        max_e=avg[i][1];
		j=i;
    }
}
printf("the class get max avg of eng: %d(%.2f)\n",j+1,max_e);

// 수학 최고 점수 출력

double max_m=0;
for(int i=0;i<4;i++){
    if(max_m<=avg[i][2]){
        max_m=avg[i][2];
		j=i;
    }
}
 

printf("the class get max avg of math: %d(%.2f)\n",j+1,max_m);
}
