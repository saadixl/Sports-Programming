class Solution {
    fun isWordFormedByRow(word : String, row : String): Boolean {
        var invalid = false
        for(char in word) {
            if(!row.contains(char.toLowerCase())) {
                invalid = true
                break
            }
        }
        return !invalid
     }
 
     fun findWords(words: Array<String>): Array<String> {
        val r1 = "qwertyuiop"
        val r2 = "asdfghjkl"
        val r3 = "zxcvbnm"

        var result = mutableListOf<String>()
        for(word in words) {
            if(isWordFormedByRow(word, r1) ||
               isWordFormedByRow(word, r2) || 
               isWordFormedByRow(word, r3)
            ) {
                result.add(word)
            }
        }
        return result.toTypedArray()
     }
}
