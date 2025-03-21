# Queue is a linear data structure that stores items in a First In First Out.
# Operations associated with a queue:
#     - Enqueue, Adds an item from the queue O(1), if full overflow
#     - Dequeue, Removes an item from the queue, O(1) if empty underflow
#     - Front Get the front item of the queue O(1)
#     - Rear Get the back item of the queue O(1)

from queue import Queue

q = Queue(maxsize=3)
print(q.qsize())
q.put('a')
q.put('b')
q.put('c')
print("\nFull: ", q.full())
print("\nElements dequeued from the queue")
print(q.get())
print(q.get())
print(q.get())
print("\nEmpty: ", q.empty())
q.put(1)
print("\nEmpty: ", q.empty())
print("Full: ", q.full())
