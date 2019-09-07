#include<StackArray.h>
#include<QueueArray.h>

StackArray <int> stack[2];
StackArray <int> moves;
QueueArray <int> queue[2];

typedef struct{
  int data = 0;
  int wall;
  bool visited = false;
}maze;
maze track[8][8];


void flood_fill(int goal_x,int goal_y){
  queue[0].dequeue(); queue[1].dequeue();

  int data = 0;

  if(track[][].wall = 10){
    queue[0].enqueue(goal_x+1);  queue[1].enqueue(goal_y);
    track[queue[0].front()][queue[1].front()].data = data;
  }


  else if(){
    
  }
  data++;
  flood_fill(queue[0].front(),queue[1].front())
}

void reach(int x,int y){
  if(x==(current_X+1)){
    //right
    moves.push(right);
  }
  if(y==(current_Y+1)){
    //forward
    moves.push(forward);
  }
  if(y==(current_X-1)){
    //left
    moves.push(left);
  }
  if(y==(current_Y-1)){
    //turn around 
    //forward
    moves.push(turn_around);
    moves.push(forward);
  }
  else if(x!=(current_X+1)&&x!=(current_X-1)&&y!=(current_Y+1)&&y!=(current_Y-1)){
    //turn around
    //forward
    //perform complementary moves and
    //check if neghbouring cell is visited, if not prefer turning that side.
  }
}

int current_X = 0;
int current_Y = 0;

void setup() {
    
}

void loop() {
  if(front_dist<3){
    track[current_X][current_Y].wall = 1;
    stack[0].push(current_X+1); stack[1].push(current_Y);
    stack[0].push(current_X-1); stack[1].push(current_Y);
  }
  if(left_dist<3){
    track[current_X][current_Y].wall = 2;

    stack[0].push(current_X+1); stack[1].push(current_Y);
    stack[0].push(current_X); stack[1].push(current_Y+1);
  }
  if(right_dist<3){
    track[current_X][current_X].wall = 8;

    stack[0].push(current_X-1); stack[1].push(current_Y);
    stack[0].push(current_X); stack[1].push(current_Y+1);
  }

  if(front_dist<3&&right_dist<3){
    track[current_X][current_Y].wall = 3; 

    stack[0].push(current_X+1); stack[1].push(current_Y);
  }
  if(front_dist<3&&left_dist<3){
    track[current_X][current_Y].wall = 9;
  }
  if(right_dist<3&&left_dist<3){
      track[][].wall = 10;
  }

  if(front_dist<3&&left_dist<3&&right_dist<3){
    track[current_X][current_Y].wall = 11;
    back_reach();
  }
  if(current_X==goal_x && current_Y==goal_y){
    flood_fill(goal_x,goal_y);
  }
  reach(stack[0].top(),stack[1].top());
}
