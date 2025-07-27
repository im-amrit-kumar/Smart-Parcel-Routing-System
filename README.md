# Smart-Parcel-Routing-System

An advanced C++ project that simulates a smart courier delivery system by applying key **Data Structures and Algorithms (DSA)**. The goal is to efficiently manage parcel deliveries using optimal routing, prioritization, and truck capacity constraints. This project can serve as a **portfolio-ready, real-world inspired DSA project** for your resume.

---

## 📌 Project Objectives

- Efficient delivery of parcels using shortest path algorithms.
- Prioritization of deliveries based on urgency.
- Assign parcels to trucks based on capacity and optimization rules.
- Realistic input-output simulation to mimic courier system behavior.

---

## 🧠 Key Concepts Used

- **Graphs & Dijkstra’s Algorithm** (Shortest path)
- **Priority Queues** (Urgency-based delivery)
- **Object-Oriented Programming (OOP)**
- **Modular Code Design using Header Files**
- **Greedy Scheduling Heuristics**

---

## 📁 File Structure

```
UrbanCourierSystem/
├── main.cpp                   → CLI + Program control flow
├── graph.h / graph.cpp        → Graph class with Dijkstra's Algorithm
├── parcel.h / parcel.cpp      → Parcel class with urgency, ID, and destination
├── truck.h / truck.cpp        → Truck class with capacity and load methods
├── scheduler.h / scheduler.cpp→ Parcel assignment and delivery batch prioritization
└── input.txt                  → Input file for graph and parcel data
```

---

## 🔧 How It Works

1. **Graph Setup**
   - City map modeled as an undirected weighted graph.
   - Nodes represent locations; edges represent travel time or distance.

2. **Parcel Creation**
   - Each parcel has:
     - Parcel ID
     - Urgency (higher = more important)
     - Destination node

3. **Truck Assignment**
   - Each truck has a fixed capacity.
   - Scheduler assigns parcels by urgency and groups them by optimal routes.

4. **Dijkstra’s Algorithm**
   - Calculates shortest paths between warehouse and all delivery destinations.
   - Helps reduce delivery time.

5. **Output**
   - Displays optimized delivery schedule.
   - Shows which truck carries which parcels and through which route.

---

## 📥 Input Format (input.txt)

```
# Format:
# First, graph edges: SOURCE DESTINATION WEIGHT
0 1 4
0 2 2
1 2 1
1 3 5
2 3 8

# Then parcels: ID URGENCY DESTINATION
101 3 3
102 1 1
103 2 2
104 4 3
```

---

## ⚙️ How to Compile & Run

### 🧑‍💻 Linux / Mac / WSL:
```bash
g++ main.cpp graph.cpp parcel.cpp truck.cpp scheduler.cpp -o courier
./courier
```

### 🖥️ Windows (Using MinGW or similar):
```bash
g++ main.cpp graph.cpp parcel.cpp truck.cpp scheduler.cpp -o courier.exe
courier.exe
```

---

## ✅ Example Output

```
Parcel 101 assigned to Truck 1
Parcel 104 assigned to Truck 1
Parcel 102 assigned to Truck 2
...
Truck 1 Route: 0 -> 2 -> 3
Truck 2 Route: 0 -> 1
```

---

## 💼 Why Add This to Your Resume?

- Real-world inspired project with practical DSA usage.
- Highlights object-oriented design and system decomposition.
- Excellent to showcase routing algorithms and optimization logic.
- Modular and scalable code base ideal for software engineering roles.

---

## 🧑‍💻 Developed By

**Amrit Kumar Das**  
🔗 [LinkedIn](http://www.linkedin.com/in/im-amrit-kumar)  
💻 [GitHub](https://github.com/im-amrit-kumar)

---

## 📜 License

This project is under the [MIT License](LICENSE).
