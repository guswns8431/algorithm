class Solution {
    func wordPattern(_ pattern: String, _ str: String) -> Bool {
        var dicChar = [Character : String]()
        var dicWord = [String : Character]()
        let words = str.split(separator: " ")
        if words.count != pattern.count { return false }
        
        for (char, word) in zip(pattern, words) {
            let w = "\(word)"
            if dicChar[char, default: w] != w { return false }
            dicChar[char] = w
            if dicWord[w, default: char] != char { return false }
            dicWord[w] = char
        }        
        return true
    }
}
