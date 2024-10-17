import java.util.HashMap;

public class FrequencyCounter {

    public static void countFrequency(String str) {
        HashMap<Character, Integer> freq = new HashMap<>();
        for (char c : str.toCharArray()) {
            freq.put(c, freq.getOrDefault(c, 0) + 1);
        }
        for (char c : freq.keySet()) {
            System.out.println(c + " : " + freq.get(c));
        }
    }

    public static void main(String[] args) {
        String str = "anagram";
        countFrequency(str);
    }
}
