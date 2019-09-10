
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class UniqueNumbers {

	public static Collection<Integer> findUniqueNumbers(Collection<Integer> nums) {
		List<Integer> res = new ArrayList<Integer>();
		Map<Integer, Integer> map = new HashMap<Integer, Integer>();

		for (int i : nums) {
			if (map.containsKey(i)) {
				map.put(i, map.get(i) + 1);
			}
			else
				map.put(i, 1);

		}

		for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
			if (entry.getValue() == 1) {
				res.add(entry.getKey());
			}
		}

		return res;
	}

	public static void main(String[] args) {
		Collection<Integer> numbers = Arrays.asList(1, 2, 1, 3);
		for (int number : findUniqueNumbers(numbers))
			System.out.println(number);
	}
}