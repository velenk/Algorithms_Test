#include <iostream>
#include <stdio.h>
using namespace std;
#define k_Max 999
int main() {
//Dijkstra() {
  //��ʼ��;
  int k_N, k_M, start, end;
  cin >> k_N >> k_M >> start >> end;
  int savemen[k_N],distant[k_N], road_number[k_N], team[k_N];
  int i, j1, j2, lenth;
  for (i = 0;i < k_N;++i) {
    cin >> savemen[i];
  }
  int road[k_N][k_N];
  for (j1 = 0;j1 < k_N;++j1) {
    for (j2 = 0;j2 < k_N;++j2) {
      road[j1][j2] = k_Max;
    }
  }
  for (i = 0;i < k_M;++i) {
    cin >> j1 >> j2 >> lenth;
    road[j1][j2] = lenth;
    road[j2][j1] = lenth;
  }
  bool finish[k_N];
  for (i = 0;i < k_N;++i) {
    finish[i] = false;
    road_number[i] = 0;
    team[i] = 0;
    distant[i] = k_Max;
  }
  //initialize the start city.
  finish[start] = true;
  distant[start] = 0;
  road_number[start] = 1;
  team[start] = savemen[start];
  //for every city that start city can arrive, update the distant.
  for (j2 = 0;j2 < k_N;++j2) {
    if (distant[start] + road[start][j2] < distant[j2]) {
      distant[j2] = distant[start] + road[start][j2];
      road_number[j2] = road_number[start];
      team[j2] = team[start] + savemen[j2];
    } else if (distant[start] + road[start][j2] == distant[j2]) {
      road_number[j2] += road_number[start];
      if (team[j2] < team[start] + savemen[j2]) {
        team[j2] = team[start] + savemen[j2];
      }
    }
  }
  //while now != end
  j1 = start;
  while (j1 != end) {
    //for range N to find the min u.
    int d = k_Max;
    for (i = 0;i < k_N;++i) {
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
    for (j2 = 0;j2 < k_N;++j2) {
      if (finish[j2]) {
        continue;
      }
      if (distant[j1] + road[start][j2] < distant[j2]) {
        distant[j2] = distant[j1] + road[start][j2];
        road_number[j2] = road_number[j1];
        team[j2] = team[j1] + savemen[j2];
      } else if (distant[j1] + road[j1][j2] == distant[j2]) {
        road_number[j2] += road_number[j1];
        if (team[j2] < team[j1] + savemen[j2]) {
          team[j2] = team[j1] + savemen[j2];
        }
      }
    }
    finish[j1] = true;
    cout << j1 << " " << road_number[j1] << " " << team[j1] << endl;
  }
  printf("%d %d",road_number[end],team[end]);
  return 0;
}
