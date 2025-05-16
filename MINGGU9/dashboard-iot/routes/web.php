<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\GraphController;
/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider and all of them will
| be assigned to the "web" middleware group. Make something great!
|
*/




Route::get('/', [GraphController::class, 'index'])->name('graph');
Route::get('/graph/export', 	[GraphController::class, 'exportToExcel'])->name('graph.export');  // Pastikan rute ini ada