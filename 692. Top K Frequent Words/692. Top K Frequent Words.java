class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        HashMap<String, Integer> count = new HashMap<>();
        HashMap<Integer, PriorityQueue<String>> bucket = new HashMap<>();
        for (int i = 0; i < words.length; i ++) {
            String word = words[i];
            if (!count.containsKey(word)) {
                count.put(word, 0);
            }
            count.put(word, count.get(word) + 1);
        }
        for (String str:count.keySet()) {
            int c = count.get(str);
            if (!bucket.containsKey(c)) {
                bucket.put(c, new PriorityQueue<String>());
            }
            bucket.get(c).add(str);
        }
        List<String> res = new LinkedList<>();
        for (int i = words.length; i >= 0 && k > 0; i --) {
            if (bucket.containsKey(i)) {
                PriorityQueue<String> q = bucket.get(i);
                while (k > 0 && !q.isEmpty()) {
                    res.add(q.poll());
                    k --;
                }
            }
        }

        return res;
    }
}