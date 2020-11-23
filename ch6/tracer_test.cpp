#include <iostream>
#include <algorithm>

#include "tracer.hpp"

using namespace std;

int main(void) {
	SortTracer input[] = { 7, 3, 5, 6, 4, 2, 0, 1, 9, 8 };

	for (int i = 0; i < 10; i++) {
		cerr << input[i].val() << ' ';
	}

	cerr << endl;

	long created_at_start = SortTracer::creations();
	long max_live_at_start = SortTracer::max_live();
	long assigned_at_start = SortTracer::assignments();
	long compared_at_start = SortTracer::comparisons();

	cerr << "---[ Start sort() ]--------------\n";
	sort<>(&input[0], &input[9] + 1);
	cerr << "---[ End sort() ]----------------\n";

	for (int i = 0; i < 10; i++) {
		cerr << input[i].val() << ' ';
	}

	cerr << "\n\n";

	cerr << "sort() of 10 SortTracer's"
		<< " was performed by:\n "
		<< SortTracer::creations() - created_at_start
		<< " temporary tracers\n"
		<< "up to "
		<< SortTracer::max_live()
		<< " tracers at the same time ("
		<< max_live_at_start << " before)\n "
		<< SortTracer::assignments() - assigned_at_start
		<< " assignments\n "
		<< SortTracer::comparisons() - compared_at_start
		<< " comparisons\n\n";

	return 0;
}
