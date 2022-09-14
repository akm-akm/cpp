//write a function to check if a string is palindrome

class A {

  public static void main(Strings[] args) {
    String s = "javajk";
    boolean isPalindromeString(String s) {
      if (s == null || s.length() == 0) {
        return true;
      }
      int left = 0;
      int right = s.length() - 1;
      while (left < right) {
        if (s.charAt(left) != s.charAt(right)) {
          return false;
        }
        left++;
        right--;
      }
      return true;
    }
    int func(String s) {
      int f = -1;
      for (int i = 0; i < s.length(); i++) {
        String t = s;
        t = t.deleteCharAt(i);

        if (isPalindromeString(t)) {
          f = i;
          break;
        }
      }
      return f;
    }
    System.out.println(func(s));
  }
}
