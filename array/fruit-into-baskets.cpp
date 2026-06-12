class Solution {
public:
    int maxFreqElement(map<int,int>& mp) {
        int maxFreq = 0;
        int element = -1;

        for (auto it : mp) {
            if (it.second > maxFreq) {
                maxFreq = it.second;
                element = it.first;
            }
        }

        return element;
    }

    int totalFruit(vector<int>& fruits) {
        map<int,int> tree;

        for (int i = 0; i < fruits.size(); i++) {
            tree[fruits[i]]++;
        }

        int fruit1 = maxFreqElement(tree);
        int fruit2 = 0;

        int freq = tree[fruit1];

        for (auto it : tree) {
            if (it.second < freq && it.second > tree[fruit2]) {
                fruit2 = it.first;
            }
        }

        return tree[fruit1] + tree[fruit2];
    }
};