// CS_paint.c 
// This program was written by Shahid Hussain
// on 27th October 2019
// Version 1.0.0 (2019-10-08): Assignment released.
/*
    The follwoing cs_paint assignment runs all of stage 1 and stage 2 and   
    runs partially stage 3, inparticular copy and paste and partially circles
    but does not run ellipsis.
*/

#include <stdio.h>
#include <math.h>

#define N_ROWS 20
#define N_COLS 36
#define BLACK 0
#define WHITE 4
#define STAGEONEBOX 100
#define REDUCINGDIRECTION 10

// Display the canvas.
void displayCanvas(int canvas[N_ROWS][N_COLS]);
// Clear the canvas by setting every pixel to be white.
void clearCanvas(int canvas[N_ROWS][N_COLS]);
// Invalud Length Function
int invalidLength (int start_row, int start_col , int length, int direction, 
                   int stage);
// STAGE ONE PART 1
void line_stage_one (int canvas[N_ROWS][N_COLS], int start_row, int start_col, 
                   int length, int direction, int y, int array[6]);
//STAGE ONE PART 2
void fillSquare (int canvas[N_ROWS][N_COLS], int start_row, int start_col,
                 int length, int direction, int y, int array[6]);
//STAGE TWO PART 1
void diagonal(int canvas[N_ROWS][N_COLS], int start_row, int start_col,
               int length, int direction, int y, int array[6]);
// STAGE 3 PART 1
void copyAndPaste (int canvas[N_ROWS][N_COLS], int target_row, int target_col, 
                   int start_row, int start_col, int length, int direction);                  
int invalidCopyPaste (int length, int direction, int stage, int target_row, 
                      int target_col);
// STAGE 3 PART 2
double distance(int row1, int col1, int row2, int col2);
void ellipsis(int canvas[N_ROWS][N_COLS], int row1, int row2, int col1, 
              int col2, int two_length, int fill, int ellipsis_distance, 
              int array[6], int y);

// Main Functions
int main(void) {
    int canvas[N_ROWS][N_COLS];
    int stage, start_row, start_col, direction, length;
    int shade;
    int target_row, target_col;
    int row1, row2, col1, col2, fill;
    int ellipsis_distance;
    int counter_one = 0;
    int y = 0;
    int array[6] = {0, 1, 2, 3, 4, 5};
    
    clearCanvas(canvas);
    // allows mutiple lines of input
    while (counter_one < STAGEONEBOX) {
   
        int invalid_stage = scanf("%d", &stage); 
              
        if (invalid_stage != 1) {
            // invalid stage input
        } else if (stage == 1 || stage == 2) { 
          
            int invalid_start_row = scanf("%d", &start_row);
            int invalid_start_col = scanf("%d", &start_col);
            int invalid_length = scanf("%d", &length);
            int invalid_direction = scanf("%d", &direction);
            
            // Invalid cases
            if (invalid_start_row != 1 || invalid_start_col != 1 
                || invalid_length != 1 
                || invalid_direction != 1) {
                
            } else { 
               
                // if legnth < 0, changes the direction input
                if (length < 0) {             
                    // direction for negative
                    if (direction > 180) {
                        length = length * -1;
                        direction = direction - 180;
                    } else {
                        length = length * -1;
                        direction = direction + 180;
                    }    
                }          
                // invalid  
                int invalid_length_function = invalidLength (start_row,
                                                             start_col, length,
                                                             direction, stage);
                                                              
                if (invalid_length_function == 1) { 
                    // checks for invalid length inputs;
                    
                } else if (stage == 1 && (direction % 360 == 45 || 
                           direction % 360 == 135 || direction % 360 == 225 || 
                           direction % 360 == 315)) {  
                                                    
                    diagonal (canvas, start_row, start_col, length, direction, 
                              y, array);
                               
                } else {
                
                    // vertical & horiztonal stright line
                    if (direction % 360 == 0 || direction % 360 == 90 || 
                        direction % 360 == 180 || direction % 360 == 270) {
                        
                        line_stage_one (canvas, start_row, start_col, length,
                                    direction, y, array);
                                    
                        // Produces Sqaures using stage 1/2
                    } else if (direction % 360 == 45 || direction % 360 == 135 
                               || direction % 360 == 225 
                               || direction % 360 == 315) {
                                
                        fillSquare (canvas, start_row, start_col, length,
                                    direction, y, array); 
                        // anyting invalid    
                    } else {
                    
                    } 
                }  
            }
        } else if (stage == 3) { 
        
            int invalid_shade = scanf("%d", &shade);
            
            //Invalid shade
            if (invalid_shade != 1 ) {   
                                             
            } else {
            
                y = y + shade;
                // for y over the rnager of 0 - 4
                if (y < 0 || y > 4) {
                    y = y - shade;
                }  
            }
        } else if (stage == 4) {
            
            int invalid_start_row = scanf("%d", &start_row);
            int invalid_start_col = scanf("%d", &start_col);
            int invalid_length = scanf("%d", &length);
            int invalid_direction = scanf("%d", &direction);
            int invalid_target_row = scanf("%d", &target_row);
            int invalid_target_col = scanf("%d", &target_col);
            
            int invalid_copy_paste = invalidCopyPaste (length, direction, stage,
                                                       target_row, target_col);
            //invalid input
            if (invalid_start_row != 1 || invalid_start_col != 1 
                || invalid_length != 1 || invalid_direction != 1
                || invalid_target_row != 1 || invalid_target_col != 1
                || invalid_copy_paste == 1) {
                
            } else {
                // prints stage 4
                copyAndPaste (canvas, target_row, target_col, start_row, 
                              start_col, length, direction);
            }
        } else if (stage == 0) {
        
            //int invalid_row1 = 
            scanf("%d", &row1);
            //int invalid_col1 = 
            scanf("%d", &col1);
            //int invalid_row2 = 
            scanf("%d", &row2);
            //int invalid_col2 = 
            scanf("%d", &col2);
            //int invalid_length = 
            scanf("%d", &length);
            //int invalid_fill = 
            scanf("%d", &fill);
            
            
            //invalid input
            /*if (invalid_row1 != 1 || invalid_col1 != 1 || invalid_row2 != 1
                || invalid_col2 != 1 || invalid_length != 1 
                || invalid_fill != 1) {
                
            } else {*/
                //prints stage 0;
                
                int two_length = length + length;
                ellipsis_distance = distance (row1, col1, row2, col2);
                ellipsis (canvas, row1, row2, col1, col2, two_length,
                         fill, ellipsis_distance, array, y); 
                
                
            
            //} 
        }
        counter_one++;
    }
    displayCanvas(canvas);   
}



// FUNCTION FOR INVALID LENGTH given on stage 1 or/and stage 2
int invalidLength (int start_row, int start_col , int length, int direction,
                   int stage) {
    int original_canvas = 0;
    //initially outside of the canvas
    if (start_row > 20 || start_col > 36 || start_row < 0 || start_col < 0) {
        original_canvas = 1;
        // line invalid
    } else if (direction % 360 == 0 &&(stage == 2 || stage == 1) ) {
        if (start_row - (length - 1) < 0) {
            original_canvas = 1;
        }    
    } else if (direction % 360 == 90 && (stage == 2 || stage == 1)) {
        if ((start_col + length) > 36) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 180 && (stage == 2 || stage == 1)) {
        if ((start_row + length) > 20) {
            original_canvas = 1;        
        }  
    } else if (direction % 360 == 270 && (stage == 2 || stage == 1)) {
        if ((start_col - (length - 1)) < 0) {
            original_canvas = 1;
        }
        // square and diagonal
    } else if (direction % 360 == 45 && (stage == 2 || stage == 1)) {
        if ((start_row - (length - 1)) < 0 || (start_col + (length - 1)) > 36) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 135 && (stage == 2 || stage == 1)) {
        if (start_row + length > 20 || start_col + length > 36) { 
            original_canvas = 1;
        } 
    } else if (direction % 360 == 225 && (stage == 2 || stage == 1)) {
        if (start_row + (length - 1) > 20 || start_col - (length - 1) < 0) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 315 && (stage == 2 || stage == 1)) {
        if (start_row - (length - 1) < 0 || start_col - (length - 1) < 0) {
            original_canvas = 1;
        }
    }
    return original_canvas;
}

// FUNCTION FOR STAGE 1 LINE, prints a line on the canvas 
void line_stage_one (int canvas[N_ROWS][N_COLS], int start_row, int start_col,
                   int length, int direction, int y, int array[6]) {
    int end_row; 
    int end_col;
    int i = 0; 
    
    if (direction % 360 == 0) {
        i = 0;
        while (i < length) {
            end_row = start_row - i;
            canvas[end_row][start_col] = array[y];
            i++;
        }
    } else if (direction % 360 == 180) {
        i = 0;
        while (i < length) {
            end_row = start_row + i;
            canvas[end_row][start_col] = array[y];
            i++;
        }
    } else if (direction % 360 == 270) {
        i = 0; 
        while (i < length) {
            end_col = start_col - i;                        
            canvas[start_row][end_col] = array[y];
            i++;
        }
    } else if (direction % 360 == 90) {
        i = 0;
        while (i < length) {
            end_col = start_col + i;
            canvas[start_row][end_col] = array[y];
            i++;
        }  
    }
}


//FUNCTION FOR STAGE 1 PART 2 , prints a square on the canvas
void fillSquare (int canvas[N_ROWS][N_COLS], int start_row, int start_col,
                 int length, int direction, int y, int array[6]) {
    int end_col;
    int end_row;
    int i = 0;
    int j = 0;
    
    if (direction % 360 == 45) {
        j = 0;
        // moves col right
        while (j < length) {
            end_col = start_col + j;
            canvas[start_row][end_col] = array[y];
            i = 0;
            // prints row up
            while (i < length) {
                end_row = start_row - i;
                canvas[end_row][end_col] = array[y];
                i++;
            }
            j++;    
        }    
    } else if (direction % 360 == 135) {
        j = 0;
        // moves row down
        while (j < length) {
            end_row = start_row + j;
            canvas[end_row][start_col] = array[y];
            i = 0;
            // moves colum right
            while (i < length) {
                end_col = start_col + i;
                canvas[end_row][end_col] = array[y];
                i++;
            }  
            j++;                
        }
    } else if (direction % 360 == 225) {
        j = 0;
        //moves col left 
        while (j < length) {
            end_col = start_col - j;
            canvas[start_row][end_col] = array[y];
            i = 0;
            // moves row down
            while (i < length) {
                end_row = start_row + i;
                canvas[end_row][end_col] = array[y];
                i++; 
            } 
            j++;
        }   
    } else if (direction % 360 == 315) {
        j = 0; 
        //moves row up
        while (j < length) {           
            end_row = start_row - j;
            canvas[end_row][start_col] = array[y];
            i = 0;
            // moves col left
            while (i < length) {
                end_col = start_col - i;
                canvas[end_row][end_col] = array[y];
                i++;
            }
            j++;
        }
    }
  

}


// STAGE 2 PART 1, prints a diagonal lines on the canvas
void diagonal(int canvas[N_ROWS][N_COLS], int start_row, int start_col,
               int length, int direction, int y, int array[6]) { 
    int end_col;
    int end_row;
    int i = 0;
    if (direction % 360 == 45) {
        i = 0;
        //moves up right
        while (i < length) {  
            end_row = start_row - i;
            end_col = start_col + i;             
            canvas[end_row][end_col] = array[y];
            i++;
        }
    } else if (direction % 360 == 135) {
        i = 0;
        // moves down right
        while (i < length) {
            end_row = start_row + i;
            end_col = start_col + i;             
            canvas[end_row][end_col] = array[y];
            i++;             
        }
    } else if (direction % 360 == 225) {
        i = 0;
        //moves left down
        while (i < length) {
            end_row = start_row + i;
            end_col = start_col - i;             
            canvas[end_row][end_col] = array[y];
            i++;             
        }
    } else if (direction % 360 == 315) {
        i = 0;
        // moves left up
        while (i < length) {
            end_row = start_row - i;
            end_col = start_col - i;             
            canvas[end_row][end_col] = array[y];
            i++;             
        } 
    } 
}

/* 
    STAGE 3 PART 1, copies part of the cavnas to another 
    gvien target cell within the array
*/

void copyAndPaste (int canvas[N_ROWS][N_COLS], int target_row, int target_col,
                   int start_row, int start_col, int length, int direction) {
    int counter_one = 0;
    int i = 0; 
    int j = 0;
    int counter_two = 0;
    int new_start_col;
    i = target_row;
    j = target_col;

    if (direction % 360 == 45) {
        // copies right up pixels
        // copies row
        while (counter_one < length) {
            counter_two = 0;
            j = target_col;
            new_start_col = start_col;
            // copeis colum
            while (counter_two < length) {
                canvas[i][j] = canvas[start_row][start_col];
                j++;
                start_col++;
                counter_two++;
            } 
            i--;
            start_row--;
            counter_one++;
        }
    } else if (direction % 360 == 135) {
        if (target_col + length > 36 || target_row + length > 20) {
            //invalid
        } else {
            // copies row down
            while (counter_one < length) {
                counter_two = 0;
                j = target_col;
                new_start_col = start_col;
                while (counter_two < length) {				    
                    // copies col left
                    canvas[i][j] = canvas[start_row][new_start_col];
                    j++;
                    new_start_col++;
                    counter_two++;
                } 
                i++;
                start_row++;
                counter_one++;
            }
        } 
    } else if (direction % 360 == 90) {
        // copies line to right
        while (counter_one < length) {
            canvas[i][j] = canvas[start_row][start_col];
            j++;
            start_col++;
            counter_one++;
        }
    } else if (direction % 360 == 125) {
        // copies row down
        while (counter_one < length) {
            counter_two = 0;
            j = target_col;
            new_start_col = start_col;
            while (counter_two < length) {
                // copies col to right
                canvas[i][j] = canvas[start_row][start_col];
                j++;
                start_col++;
                counter_two++;
            } 
            i++;
            start_row++;
            counter_one++;
        } 
    } else if (direction % 360 == 180) {
        // copies line down
        while (counter_one < length) {
            canvas[i][j] = canvas[start_row][start_col];
            i++;
            start_row++;
            counter_one++;
        }
    } else if (direction % 360 == 225 ) {
        // does down row
        while (counter_one < length) {
            counter_two = 0;
            j = target_col;
            new_start_col = start_col;
            while (counter_two < length) {
                // copies col to left
                canvas[i][j] = canvas[start_row][start_col];
                j--;
                start_col--;
                counter_two++;
            } 
            i++;
            start_row++;
            counter_one++;
        } 
    } else if (direction == 270) {
        // copies line left 
        while (counter_one < length) {
            canvas[i][j] = canvas[start_row][start_col];
            start_col--;
            j--;
            counter_one++; 
        }
    } else if (direction % 360 == 315) {
        // copies row up
        while (counter_one < length) {
            counter_two = 0;
            j = target_col;
            new_start_col = start_col;
            // copies col to left
            while (counter_two < length) {
                canvas[i][j] = canvas[start_row][start_col];
                j--;
                start_col--;
                counter_two++;
            } 
            i--;
            start_row--;
            counter_one++;
        } 
    } else if (direction % 360 == 360) {
        while (counter_one < length) {
            canvas[i][j] = canvas[start_row][start_col];
            start_row--;
            i--;
            counter_one++;
        }
    } 
    
}

//INVALID STAGE THREE COPY AND PASTE
int invalidCopyPaste (int length, int direction, int stage, int target_row, 
                      int target_col) {
                   
    int original_canvas = 0;
    //initially outside of the canvas
    if (target_row > 20 || target_col > 36 || target_row < 0 || target_col < 0) {
        original_canvas = 1;
        // line invalid
    } else if (direction % 360 == 0) {
        if (target_row - (length - 1) < 0) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 90) {
        if ((target_col + length) > 36) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 180) {
        if ((target_row + length) > 20) {
            original_canvas = 1;        
        }  
        // square and diagonal
    } else if (direction % 360 == 45) {
        if ((target_row - (length - 1)) < 0 || (target_col + (length - 1)) > 36) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 135) {
        if (target_row + length > 20 || target_col + length > 36) { 
            original_canvas = 1;
        } 
    } else if (direction % 360 == 225) {
        if (target_row + (length - 1) > 20 || target_col - (length - 1) < 0) {
            original_canvas = 1;
        }
    } else if (direction % 360 == 315) {
        if (target_row - (length - 1) < 0 || target_col - (length - 1) < 0) {
            original_canvas = 1;
        }
    }              
    return original_canvas;           
}


// STAGE 3 PART 2
// Calculate the distance between two points (row1, col1) and (row2, col2).
double distance(int row1, int col1, int row2, int col2) {
    int row_dist = row2 - row1;
    int col_dist = col2 - col1;
    return sqrt((row_dist * row_dist) + (col_dist * col_dist));
}




// STAGE 3 PART 2 
// Not working stage 3 part 2, only prints when ellip distance is 0
void ellipsis (int canvas[N_ROWS][N_COLS], int row1, int row2, int col1,
              int col2, int two_length, int fill, int ellipsis_distance, 
              int array[6], int y) {
              
    int half_length = (two_length - 1) / 2;
    int quater_length = (two_length - 1) / 4;
    int i; 
    int j;
    int counter_one = 0;
    int counter_two = 0;
    
    // its a circle
    if (ellipsis_distance == 0) {
        //prints out outline
        counter_one = 0;
        i = row1 - half_length - 1;
        j = col1 - quater_length - 1; 
        while (counter_one < half_length+1) {
            canvas[i][j] = BLACK;
            j++;
            counter_one++;
        }  
           
        counter_one = 0;
        i = row1 - quater_length - 1;
        j = col1 + half_length; 
        while (counter_one <= half_length) {
            canvas[i][j] = BLACK;
            i++;
            counter_one++;
        }
       
        counter_one = 0;
        i = row1 + half_length;
        j = col1 - quater_length + 2;
        while (counter_one <= half_length) {
            canvas[i][j] = BLACK;
            j--;
            counter_one++;
        }
        
        counter_one = 0;
        i = row1 + quater_length;
        j = col1 - half_length - 1;
        while (counter_one <= half_length) {
            canvas[i][j] = BLACK;
            i--;
            counter_one++;
        }
        
        // prints the squre inside
        i = row1- half_length;
        j = col1 - half_length;
        counter_one = 0;
        counter_two = 0;
        while (counter_two < (two_length - 2)) {
            j = col1 - half_length;
            counter_one = 0;
            while (counter_one < (two_length - 2)) {
                canvas[i][j] = BLACK;
                j++;
                counter_one++;
            }
            i++;
            counter_two++; 
        }
        //loop
        
         
       
    
    }
}


// Displays the canvas, by printing the integer value stored in
// each element of the 2-dimensional canvas array
void displayCanvas(int canvas[N_ROWS][N_COLS]) {
    int row = 0;
    while (row < N_ROWS) {
        int col = 0;
        while (col < N_COLS) {
            printf("%d ", canvas[row][col]);
            col++;
        }
        row++;
        printf("\n");
    }
}
// Sets the entire canvas to be blank, by setting each element in the
// 2-dimensional canvas array to be WHITE (which is #defined at the top
// of the file).
void clearCanvas(int canvas[N_ROWS][N_COLS]) {
    int row = 0;
    while (row < N_ROWS) {
        int col = 0;
        while (col < N_COLS) {
            canvas[row][col] = WHITE;
            col++;
        }
        row++;
    }
}




