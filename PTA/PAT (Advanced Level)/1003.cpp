#include <stdio.h>
using namespace std;
#define Max 999
int road[Max][Max];

int main() {
//Dijkstra() {
  //��ʼ��;
  int N, M, start, end;
	scanf("%d %d %d %d",&N,&M,&start,&end);
  int savemen[N],distant[N], number[N], team[N];
  int i, j1, j2, lenth;
  for (i = 0;i < N;++i) {
    scanf("%d",&savemen[i]);
  }
  for (j1 = 0;j1 < N;++j1) {
    for (j2 = 0;j2 < N;++j2) {
      road[j1][j2] = Max;
    }
  }
  for (i = 0;i < M;++i) {
    scanf("%d%d%d",&j1,&j2,&lenth);
    road[j1][j2] = lenth;
    road[j2][j1] = lenth;
  }
  bool finish[N];
  for (i = 0;i < N;++i) {
    finish[i] = false;
    number[i] = 0;
    team[i] = 0;
    distant[i] = Max;
  }
  //initialize the start city.
  distant[start] = 0;
  number[start] = 1;
  team[start] = savemen[start];
  //while now != end
  j1 = -1;
  while (j1 != end) {
    //for range N to find the min u.
    int d = Max;
    for (i = 0;i < N;++i) {
      //  u = ʹdis[u]��С�Ļ�δ�����ʵĶ���ı��;
      //  ��uΪȷ��ֵ;
      if (finish[i]) {
        continue;
      }
      if (distant[i] < d) {
        d = distant[i];
        j1 = i;
      }
    }
    //  for(��u�����ܵ�������ж���v)
    //    if(vδ������ && ��uΪ�н��ʹs������v����̾������)
    //      �Ż�dis[v];
    for (j2 = 0;j2 < N;++j2) {
      if (finish[j2] || road[j1][j2] == Max) {
        continue;
      }
      if (distant[j1] + road[start][j2] < distant[j2]) {
        distant[j2] = distant[j1] + road[start][j2];
        number[j2] = number[j1];
        team[j2] = team[j1] + savemen[j2];
      } else if (distant[j1] + road[j1][j2] == distant[j2]) {
        number[j2] += number[j1];
        if (team[j2] < team[j1] + savemen[j2]) {
          team[j2] = team[j1] + savemen[j2];
        }
      }
    }
    finish[j1] = true;
    //cout << j1 << " " << road_number[j1] << " " << team[j1] << endl;
  }
  printf("%d %d",number[end], team[end]);
  return 0;
}
