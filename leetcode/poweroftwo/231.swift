class Solution {
func isPowerOfTwo(_ n: Int) -> Bool {
        var temp = 1
        while (temp < n)
        {
            temp *= 2
        }
        return temp == n        //n전까지 temp에 2를 곱하고 true 혹은 false 반환
    }
}
