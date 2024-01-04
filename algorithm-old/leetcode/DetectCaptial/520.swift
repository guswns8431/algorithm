class Solution {
    func detectCapitalUse(_ word: String) -> Bool {
        let wordLength = word.length
        var count = 0
        
        for letter in word {
            if (letter >= "A" && letter <= "Z")
            {
                count += 1
            }
        }
        switch count {
            case 0:
                return (true)
            case 1:
                if (word[word.startIndex] >= "A" && word[word.startIndex] <= "Z")
                {
                    return (true)
                }
                return (false)
            case wordLength:
                return (true)
            default:
                return (false)
        }
    }
}
