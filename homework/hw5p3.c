/*數人數遊戲
有 N 個同學圍成一圈玩遊戲，事先說好輪流抽M張撲克牌(M<N)。

第一位同學抽一張撲克牌，依據撲克牌上的顏色與點數，決定數人數的方向(黑色代表逆時針而紅色代表順時針方向)與數量。

下圖為N =10位同學抽M=3張撲克牌的例子，第一位同學抽中紅心K (A=1、J=11、Q=12、K =13)，代表從第一個同學順時針方向數起，第13個人會被淘汰；接著，第一個淘汰者往順時針方向的下一位同學再抽牌，第二張抽中梅花A
，代表從這位同學開始逆時針方向數起，也就是自己會是被淘汰者；接著往逆時針方向的下一位同學再抽第三張牌(即最後一輪)，最後一張牌抽中黑桃6，代表從這位同學開始逆時針方向數起第6人(即7號同學)是勝利者。

依此類推，如此反覆抽牌決定每次數人數的方向與數量，到第M 張也就是最後一張牌抽出後，被數到的人就是此次遊戲的勝利者。
主程式將持續呼叫WhoOut()函式，以淘汰學生直至最後一輪找到獲勝學生為止。

輸入格式 

N ：開始學生人數，其中N 為整數，2≤N ≤100
M：抽撲克牌次數，其中M 為整數，M<N
f1c1：第一次抽取撲克牌的顏色（B代表黑色、R代表紅色）與點數(1-13)
f2c2：第二次抽取撲克牌的顏色與點數 
...
f McM：第M次抽取撲克牌的顏色與點數 


輸出格式 

s1：第一位被淘汰的學生編號 
...
sM-1：第M-1位被淘汰的學生編號
sM：獲勝者編號 


需要完成及繳交的函式：
int WhoOut(int students[], int N, char color, int point) 函式

students 學生狀態，students[i]=1，代表此學生已淘汰。
N 學生人數。
color 撲克牌顏色，傳入字元紅色(R)或黑色(B)。紅色代表順時針、黑色代表逆時針。
point 撲克牌點數(1-13)。
此函式計算並回傳該輪被淘汰或獲勝學生的編號。
int WhoOut(int students[], int N, char color, int point) {
          // 請完成並繳交本函式
}



範例測資1

輸入

5
3
R13
R10
B2

輸出

3
5
4

範例測資2

輸入

6
4
R1
R2
B1
B2

輸出

1
3
4
6*/

/*
01　	#include <iostream>
02　	using namespace std;
03　	
04　	int start_id = 0; // 紀錄每一回合從哪個學生開始
05　	
06　	int WhoOut(int students[], int N, char color, int point) {
07	        (作答區，雖然其他程式碼是C++，但作答區請打C)
08　	}
09　	
10　	int main() {
11　	    int N = 0; // 學生人數
12　	    int M = 0; // 抽撲克牌次數
13　	    int students[100] = {}; // 紀錄學生狀態
14　	    int outList[100] = {}; // 紀錄每次淘汰的學生
15　	    
16　	    cin >> N >> M;
17　	
18　	    if (M > N) {
19　	        printf("error occur");
20　	    }
21　	    else {
22　	        char color; // 顏色
23　	        int point = 0; // 點數
24　	        for (int i=0; i<M; i++) {
25　	            cin >> color >> point;
26　	            outList[i] = WhoOut(students, N, color, point);
27　	            students[outList[i]-1] = 1; // 紀錄此學生已被淘汰/獲勝
28　	        }
29　	        for (int i=0; i<M; i++) {
30　	            printf("%d\n", outList[i]);
31　	        }
32　	    }
33　	    return 0;
34　	}
35　	*/
#include <stdio.h>

int start_id = 0; // 紀錄每一回合從哪個學生開始

int WhoOut(int students[], int N, char color, int point) {
    int count=0;
    int last_id=0;//這一輪的淘汰者或勝利者
    last_id=start_id;
    if(color=='R'){
        last_id+=point;
        if(last_id<N){
            for(int i=start_id; i<=last_id;i++){
                if(students[i]==1){
                    count++;
                }
            }
            last_id+=count;
            count=0;
        }
        while(last_id>N){
            last_id-=N;
            for(int i=start_id; i<=N;i++){
                if(students[i]==1){
                count++;
                }
            }
            if(last_id>N){
                for(int i=0; i<=start_id;i++){
                    if(students[i]==1){
                        count++;
                    }
                }
            }
            else{
                for(int i=0; i<=last_id;i++){
                    if(students[i]==1){
                        count++;
                    }
                }
            }
            last_id+=count;
            count=0;
            printf("last idA:%d\n",last_id);
        }
        start_id=last_id+1;
        return last_id;
    }
    else if(color=='B'){
        last_id-=point;
        if(last_id>0){
            for(int i=start_id; i>=last_id;i--){
                if(students[i]==1){
                    count++;
                }
            }
            last_id-=count;
            count=0;
        }
        while(last_id<0){
            last_id+=N;
            for(int i=start_id; i>0; i--){
                if(students[i]==1){
                count++;
                }
            }
            if(last_id<0){
                for(int i=start_id; i<=N;i++){
                    if(students[i]==1){
                        count++;
                    }
                }
            }
            else{
                for(int i=last_id; i<=N;i++){
                    if(students[i]==1){
                        count++;
                    }
                }
            }
            last_id-=count;
            count=0;
            printf("last idB:%d\n",last_id);
        }
        
        start_id=last_id-1;
        return last_id;
    }
}

int main() {
    int N = 0; // 學生人數
    int M = 0; // 抽撲克牌次數
    int students[100] = {0}; // 紀錄學生狀態
    int outList[100] = {0}; // 紀錄每次淘汰的學生
    
    scanf("%d %d",&N,&M);
    if (M > N) {
        printf("error occur");
    }
    else {
        char color; // 顏色
        int point = 0; // 點數
        for (int i=0; i<M; i++) {
            scanf(" %c%d",&color, &point);
            outList[i] = WhoOut(students, N, color, point);
            students[outList[i]-1] = 1; // 紀錄此學生已被淘汰/獲勝
        }
        for (int i=0; i<M; i++) {
	        printf("%d\n", outList[i]);
	    }
    }
    return 0;
}