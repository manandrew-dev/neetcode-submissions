class MinStack {
  private Stack<int[]> stack;
  private int min;
  public MinStack() {
    stack = new Stack<>();
    min = Integer.MAX_VALUE;
  }

  public void push(int val) {
    stack.push(new int[]{val, min});
    if (val<min){
      min = val;
    }
  }

  public void pop() {
    if (top() == min){
      min = stack.peek()[1];
    }
    stack.pop();
  }

  public int top() {
    return stack.peek()[0];
  }

  public int getMin() {
    return min;
  }
}